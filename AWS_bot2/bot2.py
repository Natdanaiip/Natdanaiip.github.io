def reward_function(params):


   
    track_width = params['track_width']
    distance_from_center = params['distance_from_center']
    all_wheels_on_track = params['all_wheels_on_track']
    steering = abs(params['steering_angle'])
    speed = params['speed']
    is_left_of_center = params['is_left_of_center']
    steps = params['steps']
    progress = params['progress']

    marker_1 = 0.1 * track_width
    marker_2 = 0.15 * track_width
    marker_3 = 0.25 * track_width
    marker_4 = 0.5 * track_width

    
    if not all_wheels_on_track:
        reward = 1e-3
        return reward
    elif distance_from_center <= marker_1:
        reward = 1.0 * speed
        if is_left_of_center:
            reward = reward + 0.1
    elif distance_from_center <= marker_2:
        reward = 0.8 * speed
        if is_left_of_center:
            reward = reward + 0.1
    elif distance_from_center <= marker_3:
        reward = 0.3 * speed
        if is_left_of_center:
            reward = reward + 0.1
    elif distance_from_center <= marker_4:
        reward = 0.1 * speed
        if is_left_of_center:
            reward = reward + 0.1
    else:
        reward = 1e-3  # likely crashed/ close to off track

    ABS_STEERING_THRESHOLD = 15

    if steering > ABS_STEERING_THRESHOLD:
        reward *= 0.8
    if all_wheels_on_track and steps > 0 :
        reward = ((params['progress']/params['steps']) * 100) + (params['speed']**2)
    else : 
        reward = 0.01 
        
    return float(reward)
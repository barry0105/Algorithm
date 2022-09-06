def solution(bridge_length, weight, truck_weights):
    time = 0
    on_the_bridge = [0] * bridge_length
    while len(on_the_bridge):
        time += 1
        on_the_bridge.pop(0)
        if truck_weights:
            if sum(on_the_bridge) + truck_weights[0] <= weight:
                on_the_bridge.append(truck_weights.pop(0))
            else:
                on_the_bridge.append(0)            
    return time

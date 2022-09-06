def solution(clothes):
    
    hash_map = {}
    for clothe, _type in clothes:
        hash_map[_type] = hash_map.get(_type, 0 )+1
        
    answer = 1
    for _type in hash_map:
        answer *= (hash_map[_type] + 1)
    
    
    return answer - 1

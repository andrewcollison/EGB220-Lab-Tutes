import random 


#dict to store variables
sites = {'site1': [-255, 177],
		 'site2': [200, 155],
		 'site3': [100, 44]}

# List out all the dict keys/sites
dict_keys = list(sites)

# get a rondom value
random_select = 2
print(dict_keys)

# get a random site and print the coordinates.
random_site = str(dict_keys[random_select])
print(sites[random_site])

random_coordinate = sites[random_site]


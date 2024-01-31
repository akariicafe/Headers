@class NSDictionary, NSArray;

@interface HMIFFArchive : HMFObject

@property (readonly) NSDictionary *ffData;
@property (readonly) NSArray *homePersonsAndFaceCrops;
@property (readonly) NSArray *photosPersonsAndFaceCrops;
@property (readonly) NSArray *allPersonsAndFaceCrops;
@property (readonly) NSArray *homePersons;
@property (readonly) NSArray *photosPersons;
@property (readonly) NSArray *allPersons;

- (void).cxx_destruct;
- (id)faceCropsForPerson:(id)a0;
- (id)initWithJSONPath:(id)a0 error:(id *)a1;
- (id)sourceUUIDForPerson:(id)a0;

@end

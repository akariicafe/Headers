@class NSUUID, NSString;

@interface HMDPhotoLibraryPerson : HMFObject

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *name;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHMPerson:(id)a0;
- (void)updateHMPerson:(id)a0;
- (id)createHMPerson;
- (id)initWithUUID:(id)a0 name:(id)a1;

@end

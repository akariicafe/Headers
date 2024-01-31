@class NSString, NSDictionary, NSArray;

@interface FTRegion : NSObject

@property (retain) NSDictionary *_dictionary;
@property (retain) FTRegion *_parentRegion;
@property (readonly) NSString *isoCode;
@property (readonly) NSString *label;
@property (readonly) NSString *regionID;
@property (readonly) NSString *basePhoneNumber;
@property (readonly) FTRegion *parentRegion;
@property (readonly) NSArray *subRegions;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (void)_setParentRegion:(id)a0;
- (id)regionWithID:(id)a0;

@end

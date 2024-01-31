@class NSArray, NSString;

@interface HKLinkSetWrapper : NSObject {
    void /* unknown type, empty encoding */ orderedSet;
}

@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)replacingElementAt:(long long)a0 withElement:(id)a1;
- (id)mergingLinkSet:(id)a0;
- (id)appendingElement:(id)a0;
- (id)appendingElements:(id)a0;
- (id)initWithLinks:(id)a0;
- (id)insertingElement:(id)a0 index:(long long)a1;
- (id)mergingLegacyElementsArray:(id)a0;
- (id)movingElementFrom:(long long)a0 to:(long long)a1;
- (id)removingAll;
- (id)removingAtIndex:(long long)a0;
- (id)removingLinksWithUUID:(id)a0;
- (id)retargetingLinksWithUUID:(id)a0 newUUID:(id)a1;
- (id)serializedDataWithError:(id *)a0;
- (id)swappingElementsAt:(long long)a0 andAt:(long long)a1;

@end

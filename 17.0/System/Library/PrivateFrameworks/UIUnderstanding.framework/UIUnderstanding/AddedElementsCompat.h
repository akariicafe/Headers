@class NSString, NSArray;

@interface AddedElementsCompat : NSObject {
    void /* unknown type, empty encoding */ groupID;
    void /* unknown type, empty encoding */ dedupeElements;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSArray *dedupeElements;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGroupID:(id)a0 dedupeElements:(id)a1;

@end

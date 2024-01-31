@class NSArray;

@interface ATXSpotlightSuggestions : NSObject {
    void /* unknown type, empty encoding */ scores;
    void /* unknown type, empty encoding */ topics;
    void /* unknown type, empty encoding */ sections;
}

@property (nonatomic, readonly) NSArray *scores;
@property (nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSArray *sections;

- (id)init;
- (void).cxx_destruct;
- (id)createSectionsFromServerResults:(id)a0;

@end

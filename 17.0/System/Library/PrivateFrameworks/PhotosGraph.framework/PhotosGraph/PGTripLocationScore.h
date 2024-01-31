@class NSString;

@interface PGTripLocationScore : NSObject {
    void /* unknown type, empty encoding */ _score;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ locationNode;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocationNode:(id)a0 score:(double)a1;

@end

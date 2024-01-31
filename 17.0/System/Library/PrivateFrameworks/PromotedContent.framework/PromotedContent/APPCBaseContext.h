@class NSUUID, NSArray, NSString;

@interface APPCBaseContext : NSObject <APPCPromotableBaseContext> {
    void /* unknown type, empty encoding */ adjacentInternal;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ next;
    void /* unknown type, empty encoding */ adjacent;
    void /* unknown type, empty encoding */ requestedAd;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ current;
@property (nonatomic, readonly) NSArray *next;
@property (nonatomic, readonly) NSArray *adjacent;
@property (nonatomic, copy) NSString *requestedAd;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 requestedAd:(id)a1 current:(id)a2 adjacent:(id)a3;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 requestedAd:(id)a1 current:(id)a2 next:(id)a3;

@end

@interface APPCTapAction : NSObject <APPCPromotableTapAction>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ actionType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ confirmedClickInterval;

+ (id)actionFor:(id)a0;

- (id)init;
- (void)performActionWithCompletion:(id /* block */)a0;
- (id)initWithActionType:(long long)a0 confirmedClickInterval:(double)a1;

@end

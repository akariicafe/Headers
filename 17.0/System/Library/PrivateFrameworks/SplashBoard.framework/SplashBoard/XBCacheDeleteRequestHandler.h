@protocol XBApplicationProviding;

@interface XBCacheDeleteRequestHandler : NSObject

@property (retain, nonatomic) id<XBApplicationProviding> applicationProvider;

- (id)performPurge:(id)a0 urgency:(int)a1;
- (id)initWithApplicationProvider:(id)a0;
- (void).cxx_destruct;
- (id)amountPurgeable:(id)a0 urgency:(int)a1;
- (id)performPeriodic:(id)a0 urgency:(int)a1;

@end

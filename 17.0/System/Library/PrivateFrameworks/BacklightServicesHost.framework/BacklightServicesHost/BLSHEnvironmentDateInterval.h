@class NSDate, NSDateInterval;
@protocol BLSHBacklightSceneHostEnvironment;

@interface BLSHEnvironmentDateInterval : NSObject

@property (readonly, nonatomic) NSDateInterval *presentationInterval;
@property (readonly, nonatomic) NSDate *previousPresentationDate;
@property (readonly, nonatomic) BOOL shouldReset;
@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;

+ (id)intervalWithPresentationInterval:(id)a0 previousPresentationDate:(id)a1 shouldReset:(BOOL)a2 environment:(id)a3;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPresentationInterval:(id)a0 previousPresentationDate:(id)a1 shouldReset:(BOOL)a2 environment:(id)a3;

@end

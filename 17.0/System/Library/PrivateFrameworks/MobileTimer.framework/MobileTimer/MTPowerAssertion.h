@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (nonatomic) unsigned int assertionID;
@property (readonly, nonatomic) NSString *name;

- (void)releaseAssertion;
- (void)dealloc;
- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (void)takeAssertion;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end

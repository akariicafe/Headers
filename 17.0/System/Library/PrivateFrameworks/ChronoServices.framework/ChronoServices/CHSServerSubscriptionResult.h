@class NSError, NSObject;
@protocol BSInvalidatable;

@interface CHSServerSubscriptionResult : NSObject

@property (retain, nonatomic) id<BSInvalidatable> assertion;
@property (retain, nonatomic) NSObject *value;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end

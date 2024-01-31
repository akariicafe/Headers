@class NSString, NSDictionary, NSDate;

@interface IRContextInspection : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *foregroundApp;
@property (readonly, nonatomic) NSDictionary *policies;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 policies:(id)a1 foregroundApp:(id)a2;

@end

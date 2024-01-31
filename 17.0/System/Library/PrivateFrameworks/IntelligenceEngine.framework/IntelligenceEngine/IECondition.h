@class NSString, NSArray;

@interface IECondition : NSObject

@property (retain, nonatomic) NSString *conditionId;
@property (retain, nonatomic) NSString *expression;
@property (nonatomic) BOOL value;
@property (retain, nonatomic) NSArray *children;

- (void).cxx_destruct;

@end

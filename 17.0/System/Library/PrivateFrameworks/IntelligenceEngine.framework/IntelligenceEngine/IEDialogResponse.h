@class NSString, NSDictionary;

@interface IEDialogResponse : IEResponse

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *catId;
@property (retain, nonatomic) NSDictionary *catParameters;
@property (retain, nonatomic) NSDictionary *visualParameters;
@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSDictionary *patternParameters;

- (void).cxx_destruct;

@end

@class NSString;

@interface VSApplicationControllerAlertAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ callback;

+ (long long)styleFromString:(id)a0;

- (void).cxx_destruct;

@end

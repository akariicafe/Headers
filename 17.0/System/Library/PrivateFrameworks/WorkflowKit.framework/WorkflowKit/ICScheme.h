@class NSString, NSDictionary, ICApp, NSURL, NSArray;

@interface ICScheme : NSObject

@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, weak, nonatomic) ICApp *app;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSURL *universalLinkBaseURL;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) BOOL canLaunchApp;
@property (readonly, nonatomic, getter=isCallbackScheme) BOOL callbackScheme;
@property (readonly, nonatomic) NSString *callbackSourceNameKey;
@property (readonly, nonatomic) NSString *callbackSuccessURLKey;
@property (readonly, nonatomic) NSString *callbackCancelURLKey;
@property (readonly, nonatomic) NSString *callbackErrorURLKey;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesURL:(id)a0;
- (id)initWithDefinition:(id)a0 app:(id)a1;

@end

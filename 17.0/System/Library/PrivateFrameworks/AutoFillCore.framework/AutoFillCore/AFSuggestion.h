@class NSString, NSDictionary;

@interface AFSuggestion : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) NSDictionary *usernameAndPasswordPayload;
@property (readonly, nonatomic) NSDictionary *creditCardPayload;
@property (readonly, nonatomic) NSDictionary *oneTimeCodePayload;
@property (readonly, nonatomic) struct CGImage { } *leadingImage;
@property (readonly, nonatomic) struct CGImage { } *trailingImage;
@property (readonly, nonatomic) unsigned long long customInfoType;
@property (readonly, nonatomic) NSString *applicationKey;
@property (readonly, nonatomic) NSString *applicationBundleId;
@property (readonly, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 applicationKey:(id)a1 applicationBundleId:(id)a2 altDSID:(id)a3 customInfoType:(unsigned long long)a4;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 creditCardPayload:(id)a2 customInfoType:(unsigned long long)a3;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 usernameAndPasswordPayload:(id)a2 creditCardPayload:(id)a3 oneTimeCodePayload:(id)a4 leadingImage:(struct CGImage { } *)a5 trailingImage:(struct CGImage { } *)a6 applicationKey:(id)a7 applicationBundleId:(id)a8 altDSID:(id)a9 customInfoType:(unsigned long long)a10;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 usernameAndPasswordPayload:(id)a2 leadingImage:(struct CGImage { } *)a3 trailingImage:(struct CGImage { } *)a4 applicationKey:(id)a5 applicationBundleId:(id)a6 altDSID:(id)a7 customInfoType:(unsigned long long)a8;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 usernameAndPasswordPayload:(id)a2 leadingImage:(struct CGImage { } *)a3 trailingImage:(struct CGImage { } *)a4 customInfoType:(unsigned long long)a5;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 oneTimeCodePayload:(id)a2 customInfoType:(unsigned long long)a3;

@end

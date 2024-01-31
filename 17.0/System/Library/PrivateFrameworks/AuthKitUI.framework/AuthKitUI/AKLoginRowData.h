@class UIImage, NSString;

@interface AKLoginRowData : NSObject <_ASAuthenticationProviderLoginRowData>

@property (copy, nonatomic) UIImage *loginRowIconImage;
@property (copy, nonatomic) NSString *loginRowPaneTitleText;
@property (copy, nonatomic) NSString *loginRowText;
@property (copy, nonatomic) NSString *loginRowDetailText;
@property (nonatomic) long long loginRowAuthenticationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIconImage:(id)a0 paneTitleText:(id)a1 titleText:(id)a2 detailText:(id)a3 authenticationType:(long long)a4;

@end

@class NSString;

@interface MFPopupButtonItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *popupTitle;
@property (nonatomic) long long style;

+ (id)itemWithTitle:(id)a0;
+ (id)itemWithTitle:(id)a0 popupTitle:(id)a1 subtitle:(id)a2 style:(long long)a3;
+ (id)itemWithTitle:(id)a0 style:(long long)a1;

- (id)copy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

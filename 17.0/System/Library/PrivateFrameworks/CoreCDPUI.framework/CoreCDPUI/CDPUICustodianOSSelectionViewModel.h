@class NSString, UIImage, NSArray;

@interface CDPUICustodianOSSelectionViewModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) long long tableViewStyle;
@property (retain, nonatomic) NSArray *escapeOffers;
@property (copy, nonatomic) NSArray *options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

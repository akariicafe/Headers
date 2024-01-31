@class NSString, NSAttributedString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest>

@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) unsigned char textAlignment;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double width;
@property (readonly, nonatomic) Class layoutClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

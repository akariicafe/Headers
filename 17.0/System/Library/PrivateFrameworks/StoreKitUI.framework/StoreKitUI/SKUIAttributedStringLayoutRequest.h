@class NSString, NSAttributedString;

@interface SKUIAttributedStringLayoutRequest : NSObject <SKUILayoutRequest>

@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL wantsBaselineOffset;
@property (nonatomic) double width;
@property (readonly, nonatomic) Class layoutClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributedString:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

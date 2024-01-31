@class NSString, UIColor;
@protocol NSCopying;

@interface PKMultiKeyValueCellKeyValueSource : NSObject <NSCopying, PKIdentifiable>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (nonatomic, getter=isBold) BOOL bold;
@property (retain, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;

@end

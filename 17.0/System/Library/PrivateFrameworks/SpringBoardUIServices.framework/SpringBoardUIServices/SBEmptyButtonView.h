@class NSString;

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol>

@property long long character;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initForCharacter:(long long)a0;
- (id)initForCharacter:(long long)a0 style:(long long)a1;

@end

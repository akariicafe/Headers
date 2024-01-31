@class NSString;

@interface _UIActivityItemCustomizationTextField : _UIActivityItemCustomization <_UIActivityItemCustomizationTextField> {
    NSString *_text;
    NSString *_placeholder;
}

@property (copy, nonatomic, setter=_setHandler:) id /* block */ _handler;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

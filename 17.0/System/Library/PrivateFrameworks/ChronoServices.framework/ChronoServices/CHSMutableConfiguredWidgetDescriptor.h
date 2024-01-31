@class NSArray, CHSWidgetDisplayProperties;
@protocol CHSWidgetRefreshStrategy;

@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor

@property (nonatomic, getter=isSuggestion) BOOL suggestion;
@property (nonatomic, getter=isSystemConfigured) BOOL systemConfigured;
@property (nonatomic) unsigned long long supportedColorSchemes;
@property (copy, nonatomic) NSArray *supportedRenderSchemes;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) BOOL showsWidgetLabel;
@property (copy, nonatomic) CHSWidgetDisplayProperties *displayProperties;
@property (retain, nonatomic) id<CHSWidgetRefreshStrategy> refreshStrategy;
@property (nonatomic) BOOL supportsTinting;
@property (nonatomic) BOOL showsComplicationLabel;
@property (nonatomic) unsigned long long supportedRenderingModes;

- (void)setShowsWidgetLabel:(BOOL)a0;
- (void)setSupportsLowLuminance:(BOOL)a0;
- (void)setSuggestion:(BOOL)a0;
- (void)setRefreshStrategy:(id)a0;
- (void)setSupportsTinting:(BOOL)a0;
- (void)setSupportedColorSchemes:(unsigned long long)a0;
- (void)setDisplayProperties:(id)a0;
- (void)setSystemConfigured:(BOOL)a0;
- (void)setSupportedRenderingModes:(unsigned long long)a0;
- (void)setSupportedRenderSchemes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

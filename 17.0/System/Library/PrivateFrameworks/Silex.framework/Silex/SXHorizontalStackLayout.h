@class NSString, NSMutableDictionary;

@interface SXHorizontalStackLayout : NSObject <SXHorizontalStackLayout>

@property (readonly, nonatomic) NSMutableDictionary *widths;
@property (readonly, nonatomic) NSMutableDictionary *positions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)positionForIdentifier:(id)a0;
- (void)setPosition:(double)a0 forIdentifier:(id)a1;
- (void)setWidth:(double)a0 forIdentifier:(id)a1;
- (double)widthForIdentifier:(id)a0;

@end

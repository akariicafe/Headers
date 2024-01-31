@class NSString;

@interface ATXModeFaceComplicationWidgetDataSource : NSObject <ATXModeFaceComplicationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;

@end

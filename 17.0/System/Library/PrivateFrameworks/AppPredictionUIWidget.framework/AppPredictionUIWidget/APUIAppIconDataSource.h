@class NSString;
@protocol APUIAppIconDataSourceDelegate;

@interface APUIAppIconDataSource : NSObject <SBLeafIconDataSource>

@property (weak, nonatomic) id<APUIAppIconDataSourceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openApplication:(id)a0 completion:(id /* block */)a1;
+ (id)_appClipIconForIdentifier:(id)a0;
+ (id)_appClipIconTreatmentForCGImage:(struct CGImage { } *)a0;
+ (id)iconForBundleIdentifier:(id)a0 shouldApplyMask:(BOOL)a1;

@end

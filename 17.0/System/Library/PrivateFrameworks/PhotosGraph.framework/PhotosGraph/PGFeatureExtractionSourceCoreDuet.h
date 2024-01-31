@class NSString;

@interface PGFeatureExtractionSourceCoreDuet : NSObject <PGFeatureExtractionSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extractSharingRecordsFromGraph:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2 progressBlock:(id /* block */)a3;

@end

@class NSString, NSURL, NSError, NSMutableSet;
@protocol NSFilePresenter;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate>

@property (copy, nonatomic) NSURL *packageURL;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSMutableSet *persistenceWarnings;
@property (nonatomic) BOOL ignoreDocumentSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;

@end

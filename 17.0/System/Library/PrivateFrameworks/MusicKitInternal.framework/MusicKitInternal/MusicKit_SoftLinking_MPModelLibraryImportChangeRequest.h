@class NSArray, MPModelLibraryImportChangeRequest, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPModelLibraryImportChangeRequest : NSObject {
    MPModelLibraryImportChangeRequest *_underlyingLibraryImportChangeRequest;
}

@property (readonly, nonatomic) MPModelLibraryImportChangeRequest *_underlyingLibraryImportChangeRequest;
@property (copy, nonatomic) NSArray *modelObjects;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *referralObject;
@property (copy, nonatomic) NSArray *relatedModelObjects;
@property (nonatomic) BOOL shouldLibraryAdd;

- (id)init;
- (void).cxx_destruct;

@end

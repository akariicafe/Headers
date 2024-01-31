@class NSString, NSPersonNameComponents, CNContact;

@interface PXSharedLibraryUIParticipant : NSObject <NSCopying, PXFaceTileImageCombinerItem>

@property (retain, nonatomic) NSString *appleIDAddress;
@property (readonly, nonatomic) unsigned long long addressKind;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)_fetchImageForContact:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 isRTL:(BOOL)a3 resultHandler:(id /* block */)a4;
+ (int)_fetchImageForEmailAddress:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 isRTL:(BOOL)a3 resultHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)px_requestImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 isRTL:(BOOL)a2 resultHandler:(id /* block */)a3;
- (int)fetchImageForTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 isRTL:(BOOL)a2 resultHandler:(id /* block */)a3;
- (id)initWithEmailAddress:(id)a0 contact:(id)a1;
- (id)initWithPhoneNumber:(id)a0 contact:(id)a1;

@end

@class NSString, NSPersonNameComponents;
@protocol PXSharedLibraryImageProvider, PXPerson;

@interface PXSharedLibraryMockParticipant : NSObject <PXSharedLibraryImageProvider, PXSharedLibraryParticipant>

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) id<PXPerson> person;
@property (nonatomic) BOOL isCurrentUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXSharedLibraryImageProvider> imageProvider;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *localIdentifier;

- (id)init;
- (void)cancelRequestWithIdentifier:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)requestImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 isRTL:(BOOL)a2 completionHandler:(id /* block */)a3;

@end

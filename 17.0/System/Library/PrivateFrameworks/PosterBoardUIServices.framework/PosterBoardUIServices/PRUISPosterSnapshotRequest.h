@class UIScreen, NSArray, PRPosterSnapshotDefinition, PRUISPosterAttachmentConfiguration;
@protocol BSInvalidatable, PRPosterContents;

@interface PRUISPosterSnapshotRequest : NSObject <NSCopying, NSMutableCopying> {
    id<BSInvalidatable> _sandboxExtension;
}

@property (retain, nonatomic) PRPosterSnapshotDefinition *definition;
@property (nonatomic) long long interfaceOrientation;
@property (retain, nonatomic) UIScreen *screen;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) BOOL determineColorStatistics;
@property (retain, nonatomic) PRUISPosterAttachmentConfiguration *attachmentConfiguration;
@property (readonly, nonatomic) id<PRPosterContents> poster;
@property (readonly, copy, nonatomic) NSArray *attachments;

+ (id)snapshotRequestForPRSPosterConfiguration:(id)a0 definition:(id)a1 interfaceOrientation:(long long)a2;
+ (id)snapshotRequestForPRPosterConfiguration:(id)a0 definition:(id)a1 interfaceOrientation:(long long)a2;
+ (id)snapshotRequestForPoster:(id)a0 definition:(id)a1 interfaceOrientation:(long long)a2;

- (void)setAttachments:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serverPosterPath;
- (id)buildPosterKitSnapshotRequestForOutput:(unsigned long long)a0 priority:(long long)a1 error:(out id *)a2;
- (id)initWithPoster:(id)a0 definition:(id)a1 interfaceOrientation:(long long)a2;

@end

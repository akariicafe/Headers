@class UIScreen, NSArray, PRPosterSnapshotDefinition, PRUISPosterAttachmentConfiguration;

@interface PRUISMutablePosterSnapshotRequest : PRUISPosterSnapshotRequest

@property (retain, nonatomic) PRPosterSnapshotDefinition *definition;
@property (nonatomic) long long interfaceOrientation;
@property (retain, nonatomic) UIScreen *screen;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL determineColorStatistics;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) NSArray *attachments;
@property (retain, nonatomic) PRUISPosterAttachmentConfiguration *attachmentConfiguration;

- (void)appendAttachment:(id)a0;

@end

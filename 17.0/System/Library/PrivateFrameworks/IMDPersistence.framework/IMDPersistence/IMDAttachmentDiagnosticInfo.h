@class NSString;

@interface IMDAttachmentDiagnosticInfo : NSObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *originalGUID;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long total_bytes;
@property (nonatomic) long long ck_sync_state;
@property (nonatomic) long long transfer_state;
@property (nonatomic) unsigned long long hide_attachment;
@property (nonatomic) unsigned long long is_sticker;
@property (retain, nonatomic) NSString *mime_type;
@property (retain, nonatomic) NSString *plugin_identifier;

- (id)description;
- (void).cxx_destruct;

@end

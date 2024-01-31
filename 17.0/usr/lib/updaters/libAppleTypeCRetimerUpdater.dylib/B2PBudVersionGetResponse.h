@class NSString;

@interface B2PBudVersionGetResponse : B2PResponse

@property (readonly) unsigned short activeMajor;
@property (readonly) unsigned long long activeMinor;
@property (readonly) unsigned short activeRevision;
@property (readonly) NSString *activeVersion;
@property (readonly) unsigned short pendingMajor;
@property (readonly) unsigned long long pendingMinor;
@property (readonly) unsigned short pendingRevision;
@property (readonly) NSString *pendingVersion;
@property (readonly) unsigned char activeFile;
@property (readonly) unsigned char pendingFile;

- (id)description;
- (BOOL)parseResponse:(id)a0;

@end

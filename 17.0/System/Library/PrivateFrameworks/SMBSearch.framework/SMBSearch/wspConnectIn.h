@class NSString, wspPropertySet;

@interface wspConnectIn : NSObject {
    struct { unsigned int msgid; unsigned int status; unsigned int checksum; unsigned int reserved2; } msghdr;
}

@property unsigned int clientVersion;
@property unsigned int clientIsRemote;
@property unsigned int cbBlob2;
@property (retain) NSString *clientMachineName;
@property (retain) NSString *serverMachineName;
@property (retain) NSString *userName;
@property unsigned int cPropSets;
@property (retain) wspPropertySet *fsciFrameworkSet1;
@property (retain) wspPropertySet *coreFrameworkSet;
@property unsigned int cExtPropSet;
@property (retain) wspPropertySet *msidxsRowSetSet;
@property (retain) wspPropertySet *queryExtSet;
@property (retain) wspPropertySet *coreFrameworkSet2;
@property (retain) wspPropertySet *fsciFrameworkSet2;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithCtx:(id)a0 EnableRowSetEvents:(BOOL)a1 NoExpensiveProps:(BOOL)a2 UseExtendedBTypes:(BOOL)a3;

@end

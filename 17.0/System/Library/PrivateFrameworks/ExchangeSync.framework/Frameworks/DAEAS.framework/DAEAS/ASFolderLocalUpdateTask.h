@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {
    NSString *_previousSyncKey;
    ASFolder *_folder;
    int _commandCode;
    int _requestType;
    id /* block */ _completionBlock;
}

@property (nonatomic) long long dataclasses;

+ (id)taskWithFolder:(id)a0 previousSyncKey:(id)a1 completionBlock:(id /* block */)a2;

- (id)requestBody;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)processContext:(id)a0;
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (id)initWithFolder:(id)a0 previousSyncKey:(id)a1 completionBlock:(id /* block */)a2;

@end

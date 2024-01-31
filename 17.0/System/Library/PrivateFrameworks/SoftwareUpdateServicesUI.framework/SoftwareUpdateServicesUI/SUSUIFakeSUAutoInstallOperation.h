@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {
    BOOL _cancelled;
    NSUUID *_uuid;
}

- (BOOL)isCanceled;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (void)cancel;
- (id)forecast;
- (id)id;

@end

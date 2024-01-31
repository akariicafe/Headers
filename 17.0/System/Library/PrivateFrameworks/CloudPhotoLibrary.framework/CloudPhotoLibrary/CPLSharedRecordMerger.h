@class NSString;
@protocol CPLSharedRecordPropertyMapping;

@interface CPLSharedRecordMerger : NSObject <CPLSharedRecordMerger>

@property (readonly, nonatomic) id<CPLSharedRecordPropertyMapping> mapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMapping:(id)a0;
- (void).cxx_destruct;
- (void)mergeRecord:(id)a0 isSharedRecord:(BOOL)a1 inPrivateRecord:(id)a2;

@end

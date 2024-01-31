@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (id)scopedIdentifier;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)synthesizedRecord;

@end

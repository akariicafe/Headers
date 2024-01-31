@class MFMimePart, MFMessage;
@protocol MFDataConsumer, MFCollectingDataConsumer;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {
    MFMessage *_message;
    MFMimePart *_topLevelPart;
    unsigned char _allowsPartialDownloads : 1;
    unsigned char _usingPartialDownloads : 1;
    unsigned char _startedFetch : 1;
    unsigned char _fetchingMessageContents : 1;
    unsigned char _fetchingBodyText : 1;
    unsigned char _doneAddingSubdownloads : 1;
    unsigned char _fetchBodyData : 1;
    id<MFDataConsumer> _headerFilter;
    id<MFCollectingDataConsumer> _headerConsumer;
    id<MFDataConsumer> _textFilter;
    id<MFCollectingDataConsumer> _textConsumer;
}

- (BOOL)isComplete;
- (id)message;
- (void)dealloc;
- (id)data;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (BOOL)partial;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (BOOL)allowsPartialDownloads;
- (BOOL)fetchBodyData;
- (void)handleFetchResult:(id)a0;
- (void)processResults;
- (void)setAllowsPartialDownloads:(BOOL)a0;
- (void)setFetchBodyData:(BOOL)a0;
- (void)setTopLevelPart:(id)a0;
- (id)topLevelPart;

@end

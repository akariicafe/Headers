@class NSString, SNAudioProcessorCache, NSArray, NSMutableArray, AVAudioFormat;

@interface SNForwardPassAudioStreamAnalyzer : NSObject <SNTimeConverting> {
    SNAudioProcessorCache *_processorCache;
    struct list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> { struct __list_node_base<SoundAnalysis::ProcessingContext, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingContext, void *>>> { unsigned long long __value_; } __size_alloc_; } _processingContexts;
    struct ProcessingTree { struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } mGraph; struct list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> { struct __list_node_base<SoundAnalysis::ProcessingContext, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingContext, void *>>> { unsigned long long __value_; } __size_alloc_; } mProcessingContexts; struct list<SoundAnalysis::FormatMatchingNode, std::allocator<SoundAnalysis::FormatMatchingNode>> { struct __list_node_base<SoundAnalysis::FormatMatchingNode, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::FormatMatchingNode, void *>>> { unsigned long long __value_; } __size_alloc_; } mFormatMatchingNodes; struct list<SoundAnalysis::SharedProcessingNode, std::allocator<SoundAnalysis::SharedProcessingNode>> { struct __list_node_base<SoundAnalysis::SharedProcessingNode, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::SharedProcessingNode, void *>>> { unsigned long long __value_; } __size_alloc_; } mSharedProcessingNodes; struct list<SoundAnalysis::AnalyzerNode, std::allocator<SoundAnalysis::AnalyzerNode>> { struct __list_node_base<SoundAnalysis::AnalyzerNode, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::AnalyzerNode, void *>>> { unsigned long long __value_; } __size_alloc_; } mAnalyzerNodes; struct RootNode { void /* function */ **_vptr$ProcessingNode; struct ProcessingNode *mUpstreamNode; struct list<SoundAnalysis::ProcessingNode *, std::allocator<SoundAnalysis::ProcessingNode *>> { struct __list_node_base<SoundAnalysis::ProcessingNode *, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingNode *, void *>>> { unsigned long long __value_; } __size_alloc_; } mDownstreamNodes; struct Box *mProcessingBox; struct FormatAndBlockSize { struct StreamDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mFormat; unsigned int mBlockSize; } mUpstreamFormat; struct FormatAndBlockSize { struct StreamDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mFormat; unsigned int mBlockSize; } mDownstreamFormat; } mRootNode; unsigned int mMaxFramesPerSlice; struct function<void (std::shared_ptr<DSPGraph::Graph>, unsigned long)> { struct __value_func<void (std::shared_ptr<DSPGraph::Graph>, unsigned long)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mWillInitializeCallback; long long mCurrentInputSampleTime; } _processingTree;
    AVAudioFormat *_currentFormat;
    NSArray *_requests;
    NSMutableArray *_analyzerInfos;
    BOOL _shouldRebuildProcessingTree;
}

@property (readonly, nonatomic) double clientSampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailedDescription;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)clientSampleTimeFromSampleTime:(long long)a0 fromBox:(void *)a1;

@end

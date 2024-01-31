@interface CSAudioZeroFilter : NSObject {
    struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::default_delete<CSAudioZeroFilterImpl<unsigned short>>> { struct __compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::default_delete<CSAudioZeroFilterImpl<unsigned short>>> { void *__value_; } __ptr_; } _audioZeroFilterImpl;
}

- (id).cxx_construct;
- (id)metrics;
- (void).cxx_destruct;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)a0;
- (unsigned long long)filterZerosInAudioPacket:(id)a0 atBufferHostTime:(unsigned long long)a1 filteredPacket:(id *)a2;
- (id)initWithZeroWindowSize:(unsigned long long)a0 approxAbsSpeechThreshold:(unsigned short)a1 numHostTicksPerAudioSample:(double)a2;

@end

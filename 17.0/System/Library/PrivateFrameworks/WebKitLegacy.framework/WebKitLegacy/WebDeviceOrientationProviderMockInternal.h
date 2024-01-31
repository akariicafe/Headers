@interface WebDeviceOrientationProviderMockInternal : NSObject {
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> { struct __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>> { struct DeviceOrientationClientMock *__value_; } __ptr_; } m_core;
}

- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController { } *)a0;
- (id)init;
- (void)setOrientation:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)startUpdating;
- (void)stopUpdating;

@end

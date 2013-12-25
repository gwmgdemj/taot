#ifndef QTCREATOR_CASCADES_QML_COMPLETION
#define QTCREATOR_CASCADES_QML_COMPLETION

#include <bb/device/BatteryChargingState>
#include <bb/device/BatteryCondition>
#include <bb/device/BatteryInfo>
#include <bb/device/CellularBand>
#include <bb/device/CellularNetworkInfo>
#include <bb/device/CellularRadioInfo>
#include <bb/device/CellularService>
#include <bb/device/CellularTechnology>
#include <bb/device/DeviceInfo>
#include <bb/device/DeviceOrientation>
#include <bb/device/DisplayAspectType>
#include <bb/device/DisplayInfo>
#include <bb/device/DisplayTechnology>
#include <bb/device/Global>
#include <bb/device/HardwareInfo>
#include <bb/device/Led>
#include <bb/device/LedColor>
#include <bb/device/SdCardActivity>
#include <bb/device/SdCardInfo>
#include <bb/device/SdCardState>
#include <bb/device/SimCardInfo>
#include <bb/device/SimCardState>
#include <bb/device/VibrationController>
#include <bb/multimedia/AudioOutput>
#include <bb/multimedia/AudioRecorder>
#include <bb/multimedia/BufferStatus>
#include <bb/multimedia/Global>
#include <bb/multimedia/MediaError>
#include <bb/multimedia/MediaKey>
#include <bb/multimedia/MediaKeyNotification>
#include <bb/multimedia/MediaKeyWatcher>
#include <bb/multimedia/MediaPlayer>
#include <bb/multimedia/MediaState>
#include <bb/multimedia/MetaData>
#include <bb/multimedia/NowPlayingConnection>
#include <bb/multimedia/OverlayStyle>
#include <bb/multimedia/RepeatMode>
#include <bb/multimedia/SystemSound>
#include <bb/multimedia/VideoOutput>
#include <bb/platform/CancelSubscriptionReply>
#include <bb/platform/DeviceLockState>
#include <bb/platform/DigitalGoodReply>
#include <bb/platform/DigitalGoodState>
#include <bb/platform/ExistingPurchasesReply>
#include <bb/platform/Global>
#include <bb/platform/HomeScreen>
#include <bb/platform/LocationMapInvoker>
#include <bb/platform/MapInvoker>
#include <bb/platform/MapNavigationMode>
#include <bb/platform/MapSearchMode>
#include <bb/platform/MapTransportationMode>
#include <bb/platform/Notification>
#include <bb/platform/NotificationDialog>
#include <bb/platform/NotificationError>
#include <bb/platform/NotificationResult>
#include <bb/platform/PaymentConnectionMode>
#include <bb/platform/PaymentManager>
#include <bb/platform/PaymentReply>
#include <bb/platform/PlatformInfo>
#include <bb/platform/PriceReply>
#include <bb/platform/PurchaseReceipt>
#include <bb/platform/PurchaseReply>
#include <bb/platform/RouteMapInvoker>
#include <bb/platform/SubscriptionStatusReply>
#include <bb/platform/SubscriptionTermsReply>
#include <bb/platform/TypicalMapAltitude>
#include <bb/platform/WallpaperResult>
#include <bb/platform/geo/AltitudeMode>
#include <bb/platform/geo/BoundingBox>
#include <bb/platform/geo/Geographic>
#include <bb/platform/geo/GeoList>
#include <bb/platform/geo/GeoLocation>
#include <bb/platform/geo/Global>
#include <bb/platform/geo/Marker>
#include <bb/platform/geo/Point>
#include <bb/platform/bbm/ApplicationPermissions>
#include <bb/platform/bbm/Contact>
#include <bb/platform/bbm/ContactService>
#include <bb/platform/bbm/Context>
#include <bb/platform/bbm/Global>
#include <bb/platform/bbm/ImageType>
#include <bb/platform/bbm/MessageService>
#include <bb/platform/bbm/Permission>
#include <bb/platform/bbm/PermissionValue>
#include <bb/platform/bbm/ProfileBox>
#include <bb/platform/bbm/ProfileBoxItem>
#include <bb/platform/bbm/RegistrationState>
#include <bb/platform/bbm/UserProfile>
#include <bb/platform/bbm/UserStatus>
#include <bb/cascades/AbsoluteLayout>
#include <bb/cascades/AbsoluteLayoutProperties>
#include <bb/cascades/AbstractActionItem>
#include <bb/cascades/AbstractAnimation>
#include <bb/cascades/AbstractButton>
#include <bb/cascades/AbstractCover>
#include <bb/cascades/AbstractDialog>
#include <bb/cascades/AbstractPane>
#include <bb/cascades/AbstractShortcut>
#include <bb/cascades/AbstractTextControl>
#include <bb/cascades/AbstractTextFilter>
#include <bb/cascades/AbstractTitleBarKindProperties>
#include <bb/cascades/AbstractToggleButton>
#include <bb/cascades/AbstractTransition>
#include <bb/cascades/ActionBarPlacement>
#include <bb/cascades/ActionItem>
#include <bb/cascades/ActionMenuVisualState>
#include <bb/cascades/ActionSet>
#include <bb/cascades/ActiveTextHandler>
#include <bb/cascades/ActiveTextTriggeredEvent>
#include <bb/cascades/ActivityIndicator>
#include <bb/cascades/AnimationRepeatCount>
#include <bb/cascades/AnimationState>
#include <bb/cascades/Application>
#include <bb/cascades/ApplicationViewCover>
#include <bb/cascades/ArrayDataModel>
#include <bb/cascades/BaseObject>
#include <bb/cascades/Button>
#include <bb/cascades/CheckBox>
#include <bb/cascades/ChromeVisibility>
#include <bb/cascades/Color>
#include <bb/cascades/ColorPaint>
#include <bb/cascades/ColorTheme>
#include <bb/cascades/Container>
#include <bb/cascades/ContextMenuHandler>
#include <bb/cascades/ContextMenuShowingEvent>
#include <bb/cascades/ContextMenuVisualState>
#include <bb/cascades/Control>
#include <bb/cascades/CustomControl>
#include <bb/cascades/DataModel>
#include <bb/cascades/DataModelChangeType>
#include <bb/cascades/DateTimePicker>
#include <bb/cascades/DateTimePickerMode>
#include <bb/cascades/DeleteActionItem>
#include <bb/cascades/Dialog>
#include <bb/cascades/DisplayDirection>
#include <bb/cascades/Divider>
#include <bb/cascades/DockLayout>
#include <bb/cascades/DoubleTapEvent>
#include <bb/cascades/DoubleTapHandler>
#include <bb/cascades/DropDown>
#include <bb/cascades/EasingCurve>
#include <bb/cascades/Event>
#include <bb/cascades/FadeTransition>
#include <bb/cascades/FlickMode>
#include <bb/cascades/FlowListLayout>
#include <bb/cascades/FlowListLayoutProperties>
#include <bb/cascades/FocusAutoShow>
#include <bb/cascades/FocusPolicy>
#include <bb/cascades/FocusRetentionPolicy>
#include <bb/cascades/FontSize>
#include <bb/cascades/FontStyle>
#include <bb/cascades/FontWeight>
#include <bb/cascades/ForeignWindowControl>
#include <bb/cascades/FreeFormTitleBarKindProperties>
#include <bb/cascades/GestureHandler>
#include <bb/cascades/GridListLayout>
#include <bb/cascades/GroupAnimation>
#include <bb/cascades/GroupDataModel>
#include <bb/cascades/Header>
#include <bb/cascades/HelpActionItem>
#include <bb/cascades/HorizontalAlignment>
#include <bb/cascades/Image>
#include <bb/cascades/ImageAnimator>
#include <bb/cascades/ImageAnimatorAnchor>
#include <bb/cascades/ImageAnimatorSeekMode>
#include <bb/cascades/ImageButton>
#include <bb/cascades/ImagePaint>
#include <bb/cascades/ImageToggleButton>
#include <bb/cascades/ImageTracker>
#include <bb/cascades/ImageView>
#include <bb/cascades/ImageViewLoadEffect>
#include <bb/cascades/ImplicitAnimationController>
#include <bb/cascades/InputRouteProperties>
#include <bb/cascades/Invocation>
#include <bb/cascades/InvokeActionItem>
#include <bb/cascades/InvokeHandler>
#include <bb/cascades/InvokeQuery>
#include <bb/cascades/InvokeState>
#include <bb/cascades/ItemGrouping>
#include <bb/cascades/JavaScriptWorld>
#include <bb/cascades/KeyEvent>
#include <bb/cascades/KeyListener>
#include <bb/cascades/Label>
#include <bb/cascades/Layout>
#include <bb/cascades/LayoutOrientation>
#include <bb/cascades/LayoutProperties>
#include <bb/cascades/LayoutUpdateHandler>
#include <bb/cascades/ListHeaderMode>
#include <bb/cascades/ListItemListener>
#include <bb/cascades/ListItemProvider>
#include <bb/cascades/ListItemTypeMapper>
#include <bb/cascades/ListLayout>
#include <bb/cascades/ListScrollStateHandler>
#include <bb/cascades/ListView>
#include <bb/cascades/ListViewStickToEdgePolicy>
#include <bb/cascades/LocaleHandler>
#include <bb/cascades/LongPressEvent>
#include <bb/cascades/LongPressHandler>
#include <bb/cascades/Menu>
#include <bb/cascades/MultiSelectActionItem>
#include <bb/cascades/MultiSelectHandler>
#include <bb/cascades/NavigationPane>
#include <bb/cascades/NavigationPaneProperties>
#include <bb/cascades/Option>
#include <bb/cascades/OrientationSupport>
#include <bb/cascades/OverlapTouchPolicy>
#include <bb/cascades/OverScrollEffectMode>
#include <bb/cascades/Page>
#include <bb/cascades/PageResizeBehavior>
#include <bb/cascades/Paint>
#include <bb/cascades/PaneProperties>
#include <bb/cascades/ParallelAnimation>
#include <bb/cascades/Picker>
#include <bb/cascades/PickerKind>
#include <bb/cascades/PickerProvider>
#include <bb/cascades/PinchEvent>
#include <bb/cascades/PinchHandler>
#include <bb/cascades/ProgressIndicator>
#include <bb/cascades/ProgressIndicatorState>
#include <bb/cascades/PropagationPhase>
#include <bb/cascades/QListDataModel>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/RadioGroup>
#include <bb/cascades/RenderFence>
#include <bb/cascades/RenderFenceState>
#include <bb/cascades/RepeatPattern>
#include <bb/cascades/ResourceState>
#include <bb/cascades/RotateTransition>
#include <bb/cascades/ScaleTransition>
#include <bb/cascades/ScalingMethod>
#include <bb/cascades/SceneCover>
#include <bb/cascades/ScreenIdleMode>
#include <bb/cascades/ScrollAnimation>
#include <bb/cascades/ScrollIndicatorMode>
#include <bb/cascades/ScrollMode>
#include <bb/cascades/ScrollPosition>
#include <bb/cascades/ScrollView>
#include <bb/cascades/ScrollViewProperties>
#include <bb/cascades/SegmentedControl>
#include <bb/cascades/SequentialAnimation>
#include <bb/cascades/SettingsActionItem>
#include <bb/cascades/Sheet>
#include <bb/cascades/Shortcut>
#include <bb/cascades/SidebarState>
#include <bb/cascades/SidebarVisualState>
#include <bb/cascades/SingleLineTextFilter>
#include <bb/cascades/Slider>
#include <bb/cascades/SnapMode>
#include <bb/cascades/StackLayout>
#include <bb/cascades/StackLayoutProperties>
#include <bb/cascades/StackListLayout>
#include <bb/cascades/StandardListItem>
#include <bb/cascades/StockCurve>
#include <bb/cascades/SubmitKey>
#include <bb/cascades/SubmitKeyFocusBehavior>
#include <bb/cascades/SupportedDisplayOrientation>
#include <bb/cascades/SystemDefaults>
#include <bb/cascades/SystemShortcut>
#include <bb/cascades/SystemShortcuts>
#include <bb/cascades/Tab>
#include <bb/cascades/TabbedPane>
#include <bb/cascades/TapEvent>
#include <bb/cascades/TapHandler>
#include <bb/cascades/TextAlign>
#include <bb/cascades/TextArea>
#include <bb/cascades/TextAreaInputMode>
#include <bb/cascades/TextAreaScrollMode>
#include <bb/cascades/TextAutoFit>
#include <bb/cascades/TextContentFlag>
#include <bb/cascades/TextContentProperties>
#include <bb/cascades/TextEditor>
#include <bb/cascades/TextField>
#include <bb/cascades/TextFieldInputMode>
#include <bb/cascades/TextFormat>
#include <bb/cascades/TextInputFlag>
#include <bb/cascades/TextInputMasking>
#include <bb/cascades/TextInputProperties>
#include <bb/cascades/TextStyle>
#include <bb/cascades/TextStyleDefinition>
#include <bb/cascades/Theme>
#include <bb/cascades/ThemeSupport>
#include <bb/cascades/TitleBar>
#include <bb/cascades/TitleBarAppearance>
#include <bb/cascades/TitleBarExpandableArea>
#include <bb/cascades/TitleBarExpandableAreaIndicatorVisibility>
#include <bb/cascades/TitleBarExpandableAreaToggleArea>
#include <bb/cascades/TitleBarKind>
#include <bb/cascades/TitleBarScrollBehavior>
#include <bb/cascades/ToggleButton>
#include <bb/cascades/TouchBehavior>
#include <bb/cascades/TouchEnterEvent>
#include <bb/cascades/TouchEvent>
#include <bb/cascades/TouchExitEvent>
#include <bb/cascades/TouchPropagationMode>
#include <bb/cascades/TouchReaction>
#include <bb/cascades/TouchResponse>
#include <bb/cascades/TouchType>
#include <bb/cascades/TranslateTransition>
#include <bb/cascades/UIObject>
#include <bb/cascades/UIOrientation>
#include <bb/cascades/ValidationMode>
#include <bb/cascades/ValidationState>
#include <bb/cascades/Validator>
#include <bb/cascades/VerticalAlignment>
#include <bb/cascades/VisualNode>
#include <bb/cascades/VisualStyle>
#include <bb/cascades/WebCookieJar>
#include <bb/cascades/WebDownloadRequest>
#include <bb/cascades/WebFindFlag>
#include <bb/cascades/WebLoadRequest>
#include <bb/cascades/WebLoadStatus>
#include <bb/cascades/WebNavigationRequest>
#include <bb/cascades/WebNavigationRequestAction>
#include <bb/cascades/WebNavigationType>
#include <bb/cascades/WebPage>
#include <bb/cascades/WebPageCompositor>
#include <bb/cascades/WebPageEventHandler>
#include <bb/cascades/WebPageTexture>
#include <bb/cascades/WebResourceRequest>
#include <bb/cascades/WebResourceRequestFilter>
#include <bb/cascades/WebSettings>
#include <bb/cascades/WebStorage>
#include <bb/cascades/WebView>
#include <bb/cascades/Window>
#include <bb/cascades/WindowProperty>
#include <bb/cascades/WindowState>
#include <bb/cascades/XmlDataModel>
#include <bb/cascades/multimedia/BarcodeDetector>
#include <bb/cascades/multimedia/BarcodeDetectorVisuals>
#include <bb/cascades/multimedia/BarcodeFormat>
#include <bb/cascades/multimedia/Camera>
#include <bb/cascades/multimedia/CameraError>
#include <bb/cascades/multimedia/CameraFlashMode>
#include <bb/cascades/multimedia/CameraFocusMode>
#include <bb/cascades/multimedia/CameraFocusState>
#include <bb/cascades/multimedia/CameraMode>
#include <bb/cascades/multimedia/CameraSceneMode>
#include <bb/cascades/multimedia/CameraSettings>
#include <bb/cascades/multimedia/CameraShootingMode>
#include <bb/cascades/multimedia/CameraUnit>
#include <bb/cascades/multimedia/Global>
#include <bb/cascades/multimedia/QrCodeErrorCorrection>
#include <bb/cascades/multimedia/QrCodeView>
#include <bb/cascades/pickers/CalendarEventPicker>
#include <bb/cascades/pickers/CalendarEventPickerError>
#include <bb/cascades/pickers/ContactPicker>
#include <bb/cascades/pickers/ContactSelectionMode>
#include <bb/cascades/pickers/FilePicker>
#include <bb/cascades/pickers/FilePickerMode>
#include <bb/cascades/pickers/FilePickerSortFlag>
#include <bb/cascades/pickers/FilePickerSortOrder>
#include <bb/cascades/pickers/FilePickerViewMode>
#include <bb/cascades/pickers/FileType>
#include <bb/cascades/pickers/Global>
#include <bb/cascades/pickers/ICalendarConstants>
#include <bb/cascades/pickers/SelectedContactAttribute>
#include <bb/cascades/places/Global>
#include <bb/cascades/places/PlacePicker>
#include <bb/cascades/places/PlacePickerControl>
#include <bb/cascades/places/SelectedPlace>
#include <bb/cascades/places/SelectedPlaceImageType>
#include <bb/cascades/advertisement/Banner>
#include <bb/cascades/advertisement/Global>
#include <bb/cascades/maps/BlankRenderEngine>
#include <bb/cascades/maps/DataProvider>
#include <bb/cascades/maps/Global>
#include <bb/cascades/maps/KMLConversion>
#include <bb/cascades/maps/MapData>
#include <bb/cascades/maps/MapFactory>
#include <bb/cascades/maps/MapImageGenerator>
#include <bb/cascades/maps/MapLongPressToPinDrop>
#include <bb/cascades/maps/MapView>
#include <bb/cascades/maps/RenderEngine>
#include <bb/cascades/maps/RenderEngineConfiguration>
#include <bb/cascades/maps/RenderEngineInfo>
#include <bb/cascades/maps/ViewProperties>
#include <bb/system/ApplicationStartupMode>
#include <bb/system/CardDoneMessage>
#include <bb/system/CardEdge>
#include <bb/system/CardOrientation>
#include <bb/system/CardPeek>
#include <bb/system/CardResizeMessage>
#include <bb/system/Clipboard>
#include <bb/system/ContextActivityState>
#include <bb/system/ContextClassification>
#include <bb/system/ContextCollector>
#include <bb/system/ContextEvent>
#include <bb/system/FileTransferMode>
#include <bb/system/Global>
#include <bb/system/InvokeAction>
#include <bb/system/InvokeManager>
#include <bb/system/InvokeQueryTargetsReply>
#include <bb/system/InvokeQueryTargetsRequest>
#include <bb/system/InvokeReply>
#include <bb/system/InvokeReplyError>
#include <bb/system/InvokeRequest>
#include <bb/system/InvokeRequestTargetFiltersReply>
#include <bb/system/InvokeSource>
#include <bb/system/InvokeTarget>
#include <bb/system/InvokeTargetFilter>
#include <bb/system/InvokeTargetReply>
#include <bb/system/InvokeUpdateTargetFiltersRequest>
#include <bb/system/ListSelectionMode>
#include <bb/system/LocaleHandler>
#include <bb/system/LocaleType>
#include <bb/system/MeasurementSystem>
#include <bb/system/Menu>
#include <bb/system/MenuItem>
#include <bb/system/MenuItemInvokeParams>
#include <bb/system/MenuManager>
#include <bb/system/MenuManagerError>
#include <bb/system/NfcShareDataContent>
#include <bb/system/NfcShareError>
#include <bb/system/NfcShareFilesContent>
#include <bb/system/NfcShareManager>
#include <bb/system/NfcShareMode>
#include <bb/system/NfcShareSetContentError>
#include <bb/system/NfcShareSuccess>
#include <bb/system/SecurityPerimeter>
#include <bb/system/SystemCredentialsPrompt>
#include <bb/system/SystemDialog>
#include <bb/system/SystemListDialog>
#include <bb/system/SystemProgressDialog>
#include <bb/system/SystemProgressToast>
#include <bb/system/SystemPrompt>
#include <bb/system/SystemToast>
#include <bb/system/SystemUiButton>
#include <bb/system/SystemUiError>
#include <bb/system/SystemUiInputField>
#include <bb/system/SystemUiInputMode>
#include <bb/system/SystemUiModality>
#include <bb/system/SystemUiPosition>
#include <bb/system/SystemUiProgressState>
#include <bb/system/SystemUiResult>
#include <bb/system/SystemUiReturnKeyAction>
#include <bb/system/phone/Call>
#include <bb/system/phone/CallState>
#include <bb/system/phone/CallType>
#include <bb/system/phone/Line>
#include <bb/system/phone/LineType>
#include <bb/system/phone/Phone>
#include <bb/pim/Global>
#include <bb/pim/message/Attachment>
#include <bb/pim/message/AttachmentDownloadStatus>
#include <bb/pim/message/AttachmentEncoding>
#include <bb/pim/message/Conversation>
#include <bb/pim/message/ConversationBuilder>
#include <bb/pim/message/ConversationStatus>
#include <bb/pim/message/ConversationUpdate>
#include <bb/pim/message/Filter>
#include <bb/pim/message/Folder>
#include <bb/pim/message/FollowupFlag>
#include <bb/pim/message/Keys>
#include <bb/pim/message/Message>
#include <bb/pim/message/MessageBody>
#include <bb/pim/message/MessageBuilder>
#include <bb/pim/message/MessageClass>
#include <bb/pim/message/MessageContact>
#include <bb/pim/message/MessageFilter>
#include <bb/pim/message/MessageFlag>
#include <bb/pim/message/MessageFolder>
#include <bb/pim/message/MessagePriority>
#include <bb/pim/message/MessageSearchFilter>
#include <bb/pim/message/MessageService>
#include <bb/pim/message/MessageServiceFeature>
#include <bb/pim/message/MessageStatus>
#include <bb/pim/message/MessageTransaction>
#include <bb/pim/message/MessageTransmissionStatus>
#include <bb/pim/message/MessageUpdate>
#include <bb/pim/message/MessageUpdateType>
#include <bb/pim/message/MimeTypes>
#include <bb/pim/message/OutOfOfficeSettings>
#include <bb/pim/message/SearchFilterCriteria>
#include <bb/pim/message/SearchStatusCriteria>
#include <bb/pim/message/SmsTransport>
#include <bb/pim/message/SmsTransportRegistrationResult>
#include <bb/pim/message/SmsTransportSendResult>
#include <bb/pim/message/StatusReport>
#include <bb/pim/message/StatusReportType>
#include <bb/pim/account/Account>
#include <bb/pim/account/AccountsChanged>
#include <bb/pim/account/AccountService>
#include <bb/pim/account/Property>
#include <bb/pim/account/Provider>
#include <bb/pim/account/Result>
#include <bb/pim/account/Service>
#include <bb/pim/notebook/Notebook>
#include <bb/pim/notebook/NotebookConstraint>
#include <bb/pim/notebook/NotebookEntry>
#include <bb/pim/notebook/NotebookEntryAttachment>
#include <bb/pim/notebook/NotebookEntryConstraint>
#include <bb/pim/notebook/NotebookEntryDescription>
#include <bb/pim/notebook/NotebookEntryDueDate>
#include <bb/pim/notebook/NotebookEntryFilter>
#include <bb/pim/notebook/NotebookEntryId>
#include <bb/pim/notebook/NotebookEntrySearchField>
#include <bb/pim/notebook/NotebookEntryStatus>
#include <bb/pim/notebook/NotebookId>
#include <bb/pim/notebook/NotebookService>
#include <bb/pim/notebook/NotebookServiceResult>
#include <bb/pim/contacts/Contact>
#include <bb/pim/contacts/ContactActivity>
#include <bb/pim/contacts/ContactAttribute>
#include <bb/pim/contacts/ContactAttributeBuilder>
#include <bb/pim/contacts/ContactAutoCompleteSearchFilters>
#include <bb/pim/contacts/ContactBuilder>
#include <bb/pim/contacts/ContactConsts>
#include <bb/pim/contacts/ContactFavouriteAction>
#include <bb/pim/contacts/ContactFavouriteActionBuilder>
#include <bb/pim/contacts/ContactListFilters>
#include <bb/pim/contacts/ContactNews>
#include <bb/pim/contacts/ContactOnlineStatus>
#include <bb/pim/contacts/ContactPhoto>
#include <bb/pim/contacts/ContactPhotoBuilder>
#include <bb/pim/contacts/ContactPostalAddress>
#include <bb/pim/contacts/ContactPostalAddressBuilder>
#include <bb/pim/contacts/ContactRemoteSearchFilters>
#include <bb/pim/contacts/ContactSearchFilters>
#include <bb/pim/contacts/ContactService>
#include <bb/pim/calendar/AnalyticsParams>
#include <bb/pim/calendar/AnalyticsStats>
#include <bb/pim/calendar/Attendee>
#include <bb/pim/calendar/AttendeeInEvents>
#include <bb/pim/calendar/AttendeeRole>
#include <bb/pim/calendar/AttendeeSearchParameters>
#include <bb/pim/calendar/AttendeeStatus>
#include <bb/pim/calendar/BbmConference>
#include <bb/pim/calendar/BbmConferencePreferredData>
#include <bb/pim/calendar/BbmConferenceUserData>
#include <bb/pim/calendar/BusyStatus>
#include <bb/pim/calendar/CalendarEvent>
#include <bb/pim/calendar/CalendarFolder>
#include <bb/pim/calendar/CalendarService>
#include <bb/pim/calendar/CalendarSettings>
#include <bb/pim/calendar/CommonAttendee>
#include <bb/pim/calendar/CommonLocation>
#include <bb/pim/calendar/DataTypes>
#include <bb/pim/calendar/DayOfWeek>
#include <bb/pim/calendar/DetailLevel>
#include <bb/pim/calendar/EventKey>
#include <bb/pim/calendar/EventRefresh>
#include <bb/pim/calendar/EventSearchParameters>
#include <bb/pim/calendar/FolderKey>
#include <bb/pim/calendar/Frequency>
#include <bb/pim/calendar/ICalendarData>
#include <bb/pim/calendar/ICalendarDataPath>
#include <bb/pim/calendar/ICalendarObjects>
#include <bb/pim/calendar/ICalendarTodo>
#include <bb/pim/calendar/ICalendarTodoPriority>
#include <bb/pim/calendar/ICalendarTodoStatus>
#include <bb/pim/calendar/MeetingHistory>
#include <bb/pim/calendar/Notification>
#include <bb/pim/calendar/Recurrence>
#include <bb/pim/calendar/Result>
#include <bb/pim/calendar/Sensitivity>
#include <bb/pim/calendar/SortField>
#include <bb/location/Global>
#include <bb/location/PositionErrorCode>
#include <bb/network/Global>
#include <bb/network/PushCommand>
#include <bb/network/PushErrorCode>
#include <bb/network/PushPayload>
#include <bb/network/PushService>
#include <bb/network/PushStatus>
#include <bb/data/AsyncDataAccess>
#include <bb/data/AsyncWorker>
#include <bb/data/DataAccessError>
#include <bb/data/DataAccessErrorType>
#include <bb/data/DataAccessReply>
#include <bb/data/DataSource>
#include <bb/data/DataSourceType>
#include <bb/data/JsonDataAccess>
#include <bb/data/SqlConnection>
#include <bb/data/SqlDataAccess>
#include <bb/data/SqlWorker>
#include <bb/data/XmlDataAccess>
#include <bb/utility/Global>
#include <bb/utility/ImageConverter>
#include <bb/utility/SpellChecker>
#include <bb/utility/StringValidator>
#include <bb/utility/i18n/CustomDateFormatter>
#include <bb/utility/i18n/DateFormat>
#include <bb/utility/i18n/Formatting>
#include <bb/utility/i18n/Global>


void registerCascadesQMLTypes()
{
    qmlRegisterType<bb::device::BatteryChargingState>("bb.cascades",1,0,"BatteryChargingState");
    qmlRegisterType<bb::device::BatteryCondition>("bb.cascades",1,0,"BatteryCondition");
    qmlRegisterType<bb::device::BatteryInfo>("bb.cascades",1,0,"BatteryInfo");
    qmlRegisterType<bb::device::CellularBand>("bb.cascades",1,0,"CellularBand");
    qmlRegisterType<bb::device::CellularNetworkInfo>("bb.cascades",1,0,"CellularNetworkInfo");
    qmlRegisterType<bb::device::CellularRadioInfo>("bb.cascades",1,0,"CellularRadioInfo");
    qmlRegisterType<bb::device::CellularService>("bb.cascades",1,0,"CellularService");
    qmlRegisterType<bb::device::CellularTechnology>("bb.cascades",1,0,"CellularTechnology");
    qmlRegisterType<bb::device::DeviceInfo>("bb.cascades",1,0,"DeviceInfo");
    qmlRegisterType<bb::device::DeviceOrientation>("bb.cascades",1,0,"DeviceOrientation");
    qmlRegisterType<bb::device::DisplayAspectType>("bb.cascades",1,0,"DisplayAspectType");
    qmlRegisterType<bb::device::DisplayInfo>("bb.cascades",1,0,"DisplayInfo");
    qmlRegisterType<bb::device::DisplayTechnology>("bb.cascades",1,0,"DisplayTechnology");
    qmlRegisterType<bb::device::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::device::HardwareInfo>("bb.cascades",1,0,"HardwareInfo");
    qmlRegisterType<bb::device::Led>("bb.cascades",1,0,"Led");
    qmlRegisterType<bb::device::LedColor>("bb.cascades",1,0,"LedColor");
    qmlRegisterType<bb::device::SdCardActivity>("bb.cascades",1,0,"SdCardActivity");
    qmlRegisterType<bb::device::SdCardInfo>("bb.cascades",1,0,"SdCardInfo");
    qmlRegisterType<bb::device::SdCardState>("bb.cascades",1,0,"SdCardState");
    qmlRegisterType<bb::device::SimCardInfo>("bb.cascades",1,0,"SimCardInfo");
    qmlRegisterType<bb::device::SimCardState>("bb.cascades",1,0,"SimCardState");
    qmlRegisterType<bb::device::VibrationController>("bb.cascades",1,0,"VibrationController");
    qmlRegisterType<bb::multimedia::AudioOutput>("bb.cascades",1,0,"AudioOutput");
    qmlRegisterType<bb::multimedia::AudioRecorder>("bb.cascades",1,0,"AudioRecorder");
    qmlRegisterType<bb::multimedia::BufferStatus>("bb.cascades",1,0,"BufferStatus");
    qmlRegisterType<bb::multimedia::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::multimedia::MediaError>("bb.cascades",1,0,"MediaError");
    qmlRegisterType<bb::multimedia::MediaKey>("bb.cascades",1,0,"MediaKey");
    qmlRegisterType<bb::multimedia::MediaKeyNotification>("bb.cascades",1,0,"MediaKeyNotification");
    qmlRegisterType<bb::multimedia::MediaKeyWatcher>("bb.cascades",1,0,"MediaKeyWatcher");
    qmlRegisterType<bb::multimedia::MediaPlayer>("bb.cascades",1,0,"MediaPlayer");
    qmlRegisterType<bb::multimedia::MediaState>("bb.cascades",1,0,"MediaState");
    qmlRegisterType<bb::multimedia::MetaData>("bb.cascades",1,0,"MetaData");
    qmlRegisterType<bb::multimedia::NowPlayingConnection>("bb.cascades",1,0,"NowPlayingConnection");
    qmlRegisterType<bb::multimedia::OverlayStyle>("bb.cascades",1,0,"OverlayStyle");
    qmlRegisterType<bb::multimedia::RepeatMode>("bb.cascades",1,0,"RepeatMode");
    qmlRegisterType<bb::multimedia::SystemSound>("bb.cascades",1,0,"SystemSound");
    qmlRegisterType<bb::multimedia::VideoOutput>("bb.cascades",1,0,"VideoOutput");
    qmlRegisterType<bb::platform::CancelSubscriptionReply>("bb.cascades",1,0,"CancelSubscriptionReply");
    qmlRegisterType<bb::platform::DeviceLockState>("bb.cascades",1,0,"DeviceLockState");
    qmlRegisterType<bb::platform::DigitalGoodReply>("bb.cascades",1,0,"DigitalGoodReply");
    qmlRegisterType<bb::platform::DigitalGoodState>("bb.cascades",1,0,"DigitalGoodState");
    qmlRegisterType<bb::platform::ExistingPurchasesReply>("bb.cascades",1,0,"ExistingPurchasesReply");
    qmlRegisterType<bb::platform::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::platform::HomeScreen>("bb.cascades",1,0,"HomeScreen");
    qmlRegisterType<bb::platform::LocationMapInvoker>("bb.cascades",1,0,"LocationMapInvoker");
    qmlRegisterType<bb::platform::MapInvoker>("bb.cascades",1,0,"MapInvoker");
    qmlRegisterType<bb::platform::MapNavigationMode>("bb.cascades",1,0,"MapNavigationMode");
    qmlRegisterType<bb::platform::MapSearchMode>("bb.cascades",1,0,"MapSearchMode");
    qmlRegisterType<bb::platform::MapTransportationMode>("bb.cascades",1,0,"MapTransportationMode");
    qmlRegisterType<bb::platform::Notification>("bb.cascades",1,0,"Notification");
    qmlRegisterType<bb::platform::NotificationDialog>("bb.cascades",1,0,"NotificationDialog");
    qmlRegisterType<bb::platform::NotificationError>("bb.cascades",1,0,"NotificationError");
    qmlRegisterType<bb::platform::NotificationResult>("bb.cascades",1,0,"NotificationResult");
    qmlRegisterType<bb::platform::PaymentConnectionMode>("bb.cascades",1,0,"PaymentConnectionMode");
    qmlRegisterType<bb::platform::PaymentManager>("bb.cascades",1,0,"PaymentManager");
    qmlRegisterType<bb::platform::PaymentReply>("bb.cascades",1,0,"PaymentReply");
    qmlRegisterType<bb::platform::PlatformInfo>("bb.cascades",1,0,"PlatformInfo");
    qmlRegisterType<bb::platform::PriceReply>("bb.cascades",1,0,"PriceReply");
    qmlRegisterType<bb::platform::PurchaseReceipt>("bb.cascades",1,0,"PurchaseReceipt");
    qmlRegisterType<bb::platform::PurchaseReply>("bb.cascades",1,0,"PurchaseReply");
    qmlRegisterType<bb::platform::RouteMapInvoker>("bb.cascades",1,0,"RouteMapInvoker");
    qmlRegisterType<bb::platform::SubscriptionStatusReply>("bb.cascades",1,0,"SubscriptionStatusReply");
    qmlRegisterType<bb::platform::SubscriptionTermsReply>("bb.cascades",1,0,"SubscriptionTermsReply");
    qmlRegisterType<bb::platform::TypicalMapAltitude>("bb.cascades",1,0,"TypicalMapAltitude");
    qmlRegisterType<bb::platform::WallpaperResult>("bb.cascades",1,0,"WallpaperResult");
    qmlRegisterType<bb::platform::AltitudeMode>("bb.cascades",1,0,"AltitudeMode");
    qmlRegisterType<bb::platform::BoundingBox>("bb.cascades",1,0,"BoundingBox");
    qmlRegisterType<bb::platform::Geographic>("bb.cascades",1,0,"Geographic");
    qmlRegisterType<bb::platform::GeoList>("bb.cascades",1,0,"GeoList");
    qmlRegisterType<bb::platform::GeoLocation>("bb.cascades",1,0,"GeoLocation");
    qmlRegisterType<bb::platform::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::platform::Marker>("bb.cascades",1,0,"Marker");
    qmlRegisterType<bb::platform::Point>("bb.cascades",1,0,"Point");
    qmlRegisterType<bb::platform::ApplicationPermissions>("bb.cascades",1,0,"ApplicationPermissions");
    qmlRegisterType<bb::platform::Contact>("bb.cascades",1,0,"Contact");
    qmlRegisterType<bb::platform::ContactService>("bb.cascades",1,0,"ContactService");
    qmlRegisterType<bb::platform::Context>("bb.cascades",1,0,"Context");
    qmlRegisterType<bb::platform::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::platform::ImageType>("bb.cascades",1,0,"ImageType");
    qmlRegisterType<bb::platform::MessageService>("bb.cascades",1,0,"MessageService");
    qmlRegisterType<bb::platform::Permission>("bb.cascades",1,0,"Permission");
    qmlRegisterType<bb::platform::PermissionValue>("bb.cascades",1,0,"PermissionValue");
    qmlRegisterType<bb::platform::ProfileBox>("bb.cascades",1,0,"ProfileBox");
    qmlRegisterType<bb::platform::ProfileBoxItem>("bb.cascades",1,0,"ProfileBoxItem");
    qmlRegisterType<bb::platform::RegistrationState>("bb.cascades",1,0,"RegistrationState");
    qmlRegisterType<bb::platform::UserProfile>("bb.cascades",1,0,"UserProfile");
    qmlRegisterType<bb::platform::UserStatus>("bb.cascades",1,0,"UserStatus");
    qmlRegisterType<bb::cascades::AbsoluteLayout>("bb.cascades",1,0,"AbsoluteLayout");
    qmlRegisterType<bb::cascades::AbsoluteLayoutProperties>("bb.cascades",1,0,"AbsoluteLayoutProperties");
    qmlRegisterType<bb::cascades::AbstractActionItem>("bb.cascades",1,0,"AbstractActionItem");
    qmlRegisterType<bb::cascades::AbstractAnimation>("bb.cascades",1,0,"AbstractAnimation");
    qmlRegisterType<bb::cascades::AbstractButton>("bb.cascades",1,0,"AbstractButton");
    qmlRegisterType<bb::cascades::AbstractCover>("bb.cascades",1,0,"AbstractCover");
    qmlRegisterType<bb::cascades::AbstractDialog>("bb.cascades",1,0,"AbstractDialog");
    qmlRegisterType<bb::cascades::AbstractPane>("bb.cascades",1,0,"AbstractPane");
    qmlRegisterType<bb::cascades::AbstractShortcut>("bb.cascades",1,0,"AbstractShortcut");
    qmlRegisterType<bb::cascades::AbstractTextControl>("bb.cascades",1,0,"AbstractTextControl");
    qmlRegisterType<bb::cascades::AbstractTextFilter>("bb.cascades",1,0,"AbstractTextFilter");
    qmlRegisterType<bb::cascades::AbstractTitleBarKindProperties>("bb.cascades",1,0,"AbstractTitleBarKindProperties");
    qmlRegisterType<bb::cascades::AbstractToggleButton>("bb.cascades",1,0,"AbstractToggleButton");
    qmlRegisterType<bb::cascades::AbstractTransition>("bb.cascades",1,0,"AbstractTransition");
    qmlRegisterType<bb::cascades::ActionBarPlacement>("bb.cascades",1,0,"ActionBarPlacement");
    qmlRegisterType<bb::cascades::ActionItem>("bb.cascades",1,0,"ActionItem");
    qmlRegisterType<bb::cascades::ActionMenuVisualState>("bb.cascades",1,0,"ActionMenuVisualState");
    qmlRegisterType<bb::cascades::ActionSet>("bb.cascades",1,0,"ActionSet");
    qmlRegisterType<bb::cascades::ActiveTextHandler>("bb.cascades",1,0,"ActiveTextHandler");
    qmlRegisterType<bb::cascades::ActiveTextTriggeredEvent>("bb.cascades",1,0,"ActiveTextTriggeredEvent");
    qmlRegisterType<bb::cascades::ActivityIndicator>("bb.cascades",1,0,"ActivityIndicator");
    qmlRegisterType<bb::cascades::AnimationRepeatCount>("bb.cascades",1,0,"AnimationRepeatCount");
    qmlRegisterType<bb::cascades::AnimationState>("bb.cascades",1,0,"AnimationState");
    qmlRegisterType<bb::cascades::Application>("bb.cascades",1,0,"Application");
    qmlRegisterType<bb::cascades::ApplicationViewCover>("bb.cascades",1,0,"ApplicationViewCover");
    qmlRegisterType<bb::cascades::ArrayDataModel>("bb.cascades",1,0,"ArrayDataModel");
    qmlRegisterType<bb::cascades::BaseObject>("bb.cascades",1,0,"BaseObject");
    qmlRegisterType<bb::cascades::Button>("bb.cascades",1,0,"Button");
    qmlRegisterType<bb::cascades::CheckBox>("bb.cascades",1,0,"CheckBox");
    qmlRegisterType<bb::cascades::ChromeVisibility>("bb.cascades",1,0,"ChromeVisibility");
    qmlRegisterType<bb::cascades::Color>("bb.cascades",1,0,"Color");
    qmlRegisterType<bb::cascades::ColorPaint>("bb.cascades",1,0,"ColorPaint");
    qmlRegisterType<bb::cascades::ColorTheme>("bb.cascades",1,0,"ColorTheme");
    qmlRegisterType<bb::cascades::Container>("bb.cascades",1,0,"Container");
    qmlRegisterType<bb::cascades::ContextMenuHandler>("bb.cascades",1,0,"ContextMenuHandler");
    qmlRegisterType<bb::cascades::ContextMenuShowingEvent>("bb.cascades",1,0,"ContextMenuShowingEvent");
    qmlRegisterType<bb::cascades::ContextMenuVisualState>("bb.cascades",1,0,"ContextMenuVisualState");
    qmlRegisterType<bb::cascades::Control>("bb.cascades",1,0,"Control");
    qmlRegisterType<bb::cascades::CustomControl>("bb.cascades",1,0,"CustomControl");
    qmlRegisterType<bb::cascades::DataModel>("bb.cascades",1,0,"DataModel");
    qmlRegisterType<bb::cascades::DataModelChangeType>("bb.cascades",1,0,"DataModelChangeType");
    qmlRegisterType<bb::cascades::DateTimePicker>("bb.cascades",1,0,"DateTimePicker");
    qmlRegisterType<bb::cascades::DateTimePickerMode>("bb.cascades",1,0,"DateTimePickerMode");
    qmlRegisterType<bb::cascades::DeleteActionItem>("bb.cascades",1,0,"DeleteActionItem");
    qmlRegisterType<bb::cascades::Dialog>("bb.cascades",1,0,"Dialog");
    qmlRegisterType<bb::cascades::DisplayDirection>("bb.cascades",1,0,"DisplayDirection");
    qmlRegisterType<bb::cascades::Divider>("bb.cascades",1,0,"Divider");
    qmlRegisterType<bb::cascades::DockLayout>("bb.cascades",1,0,"DockLayout");
    qmlRegisterType<bb::cascades::DoubleTapEvent>("bb.cascades",1,0,"DoubleTapEvent");
    qmlRegisterType<bb::cascades::DoubleTapHandler>("bb.cascades",1,0,"DoubleTapHandler");
    qmlRegisterType<bb::cascades::DropDown>("bb.cascades",1,0,"DropDown");
    qmlRegisterType<bb::cascades::EasingCurve>("bb.cascades",1,0,"EasingCurve");
    qmlRegisterType<bb::cascades::Event>("bb.cascades",1,0,"Event");
    qmlRegisterType<bb::cascades::FadeTransition>("bb.cascades",1,0,"FadeTransition");
    qmlRegisterType<bb::cascades::FlickMode>("bb.cascades",1,0,"FlickMode");
    qmlRegisterType<bb::cascades::FlowListLayout>("bb.cascades",1,0,"FlowListLayout");
    qmlRegisterType<bb::cascades::FlowListLayoutProperties>("bb.cascades",1,0,"FlowListLayoutProperties");
    qmlRegisterType<bb::cascades::FocusAutoShow>("bb.cascades",1,0,"FocusAutoShow");
    qmlRegisterType<bb::cascades::FocusPolicy>("bb.cascades",1,0,"FocusPolicy");
    qmlRegisterType<bb::cascades::FocusRetentionPolicy>("bb.cascades",1,0,"FocusRetentionPolicy");
    qmlRegisterType<bb::cascades::FontSize>("bb.cascades",1,0,"FontSize");
    qmlRegisterType<bb::cascades::FontStyle>("bb.cascades",1,0,"FontStyle");
    qmlRegisterType<bb::cascades::FontWeight>("bb.cascades",1,0,"FontWeight");
    qmlRegisterType<bb::cascades::ForeignWindowControl>("bb.cascades",1,0,"ForeignWindowControl");
    qmlRegisterType<bb::cascades::FreeFormTitleBarKindProperties>("bb.cascades",1,0,"FreeFormTitleBarKindProperties");
    qmlRegisterType<bb::cascades::GestureHandler>("bb.cascades",1,0,"GestureHandler");
    qmlRegisterType<bb::cascades::GridListLayout>("bb.cascades",1,0,"GridListLayout");
    qmlRegisterType<bb::cascades::GroupAnimation>("bb.cascades",1,0,"GroupAnimation");
    qmlRegisterType<bb::cascades::GroupDataModel>("bb.cascades",1,0,"GroupDataModel");
    qmlRegisterType<bb::cascades::Header>("bb.cascades",1,0,"Header");
    qmlRegisterType<bb::cascades::HelpActionItem>("bb.cascades",1,0,"HelpActionItem");
    qmlRegisterType<bb::cascades::HorizontalAlignment>("bb.cascades",1,0,"HorizontalAlignment");
    qmlRegisterType<bb::cascades::Image>("bb.cascades",1,0,"Image");
    qmlRegisterType<bb::cascades::ImageAnimator>("bb.cascades",1,0,"ImageAnimator");
    qmlRegisterType<bb::cascades::ImageAnimatorAnchor>("bb.cascades",1,0,"ImageAnimatorAnchor");
    qmlRegisterType<bb::cascades::ImageAnimatorSeekMode>("bb.cascades",1,0,"ImageAnimatorSeekMode");
    qmlRegisterType<bb::cascades::ImageButton>("bb.cascades",1,0,"ImageButton");
    qmlRegisterType<bb::cascades::ImagePaint>("bb.cascades",1,0,"ImagePaint");
    qmlRegisterType<bb::cascades::ImageToggleButton>("bb.cascades",1,0,"ImageToggleButton");
    qmlRegisterType<bb::cascades::ImageTracker>("bb.cascades",1,0,"ImageTracker");
    qmlRegisterType<bb::cascades::ImageView>("bb.cascades",1,0,"ImageView");
    qmlRegisterType<bb::cascades::ImageViewLoadEffect>("bb.cascades",1,0,"ImageViewLoadEffect");
    qmlRegisterType<bb::cascades::ImplicitAnimationController>("bb.cascades",1,0,"ImplicitAnimationController");
    qmlRegisterType<bb::cascades::InputRouteProperties>("bb.cascades",1,0,"InputRouteProperties");
    qmlRegisterType<bb::cascades::Invocation>("bb.cascades",1,0,"Invocation");
    qmlRegisterType<bb::cascades::InvokeActionItem>("bb.cascades",1,0,"InvokeActionItem");
    qmlRegisterType<bb::cascades::InvokeHandler>("bb.cascades",1,0,"InvokeHandler");
    qmlRegisterType<bb::cascades::InvokeQuery>("bb.cascades",1,0,"InvokeQuery");
    qmlRegisterType<bb::cascades::InvokeState>("bb.cascades",1,0,"InvokeState");
    qmlRegisterType<bb::cascades::ItemGrouping>("bb.cascades",1,0,"ItemGrouping");
    qmlRegisterType<bb::cascades::JavaScriptWorld>("bb.cascades",1,0,"JavaScriptWorld");
    qmlRegisterType<bb::cascades::KeyEvent>("bb.cascades",1,0,"KeyEvent");
    qmlRegisterType<bb::cascades::KeyListener>("bb.cascades",1,0,"KeyListener");
    qmlRegisterType<bb::cascades::Label>("bb.cascades",1,0,"Label");
    qmlRegisterType<bb::cascades::Layout>("bb.cascades",1,0,"Layout");
    qmlRegisterType<bb::cascades::LayoutOrientation>("bb.cascades",1,0,"LayoutOrientation");
    qmlRegisterType<bb::cascades::LayoutProperties>("bb.cascades",1,0,"LayoutProperties");
    qmlRegisterType<bb::cascades::LayoutUpdateHandler>("bb.cascades",1,0,"LayoutUpdateHandler");
    qmlRegisterType<bb::cascades::ListHeaderMode>("bb.cascades",1,0,"ListHeaderMode");
    qmlRegisterType<bb::cascades::ListItemListener>("bb.cascades",1,0,"ListItemListener");
    qmlRegisterType<bb::cascades::ListItemProvider>("bb.cascades",1,0,"ListItemProvider");
    qmlRegisterType<bb::cascades::ListItemTypeMapper>("bb.cascades",1,0,"ListItemTypeMapper");
    qmlRegisterType<bb::cascades::ListLayout>("bb.cascades",1,0,"ListLayout");
    qmlRegisterType<bb::cascades::ListScrollStateHandler>("bb.cascades",1,0,"ListScrollStateHandler");
    qmlRegisterType<bb::cascades::ListView>("bb.cascades",1,0,"ListView");
    qmlRegisterType<bb::cascades::ListViewStickToEdgePolicy>("bb.cascades",1,0,"ListViewStickToEdgePolicy");
    qmlRegisterType<bb::cascades::LocaleHandler>("bb.cascades",1,0,"LocaleHandler");
    qmlRegisterType<bb::cascades::LongPressEvent>("bb.cascades",1,0,"LongPressEvent");
    qmlRegisterType<bb::cascades::LongPressHandler>("bb.cascades",1,0,"LongPressHandler");
    qmlRegisterType<bb::cascades::Menu>("bb.cascades",1,0,"Menu");
    qmlRegisterType<bb::cascades::MultiSelectActionItem>("bb.cascades",1,0,"MultiSelectActionItem");
    qmlRegisterType<bb::cascades::MultiSelectHandler>("bb.cascades",1,0,"MultiSelectHandler");
    qmlRegisterType<bb::cascades::NavigationPane>("bb.cascades",1,0,"NavigationPane");
    qmlRegisterType<bb::cascades::NavigationPaneProperties>("bb.cascades",1,0,"NavigationPaneProperties");
    qmlRegisterType<bb::cascades::Option>("bb.cascades",1,0,"Option");
    qmlRegisterType<bb::cascades::OrientationSupport>("bb.cascades",1,0,"OrientationSupport");
    qmlRegisterType<bb::cascades::OverlapTouchPolicy>("bb.cascades",1,0,"OverlapTouchPolicy");
    qmlRegisterType<bb::cascades::OverScrollEffectMode>("bb.cascades",1,0,"OverScrollEffectMode");
    qmlRegisterType<bb::cascades::Page>("bb.cascades",1,0,"Page");
    qmlRegisterType<bb::cascades::PageResizeBehavior>("bb.cascades",1,0,"PageResizeBehavior");
    qmlRegisterType<bb::cascades::Paint>("bb.cascades",1,0,"Paint");
    qmlRegisterType<bb::cascades::PaneProperties>("bb.cascades",1,0,"PaneProperties");
    qmlRegisterType<bb::cascades::ParallelAnimation>("bb.cascades",1,0,"ParallelAnimation");
    qmlRegisterType<bb::cascades::Picker>("bb.cascades",1,0,"Picker");
    qmlRegisterType<bb::cascades::PickerKind>("bb.cascades",1,0,"PickerKind");
    qmlRegisterType<bb::cascades::PickerProvider>("bb.cascades",1,0,"PickerProvider");
    qmlRegisterType<bb::cascades::PinchEvent>("bb.cascades",1,0,"PinchEvent");
    qmlRegisterType<bb::cascades::PinchHandler>("bb.cascades",1,0,"PinchHandler");
    qmlRegisterType<bb::cascades::ProgressIndicator>("bb.cascades",1,0,"ProgressIndicator");
    qmlRegisterType<bb::cascades::ProgressIndicatorState>("bb.cascades",1,0,"ProgressIndicatorState");
    qmlRegisterType<bb::cascades::PropagationPhase>("bb.cascades",1,0,"PropagationPhase");
    qmlRegisterType<bb::cascades::QListDataModel>("bb.cascades",1,0,"QListDataModel");
    qmlRegisterType<bb::cascades::QmlDocument>("bb.cascades",1,0,"QmlDocument");
    qmlRegisterType<bb::cascades::RadioGroup>("bb.cascades",1,0,"RadioGroup");
    qmlRegisterType<bb::cascades::RenderFence>("bb.cascades",1,0,"RenderFence");
    qmlRegisterType<bb::cascades::RenderFenceState>("bb.cascades",1,0,"RenderFenceState");
    qmlRegisterType<bb::cascades::RepeatPattern>("bb.cascades",1,0,"RepeatPattern");
    qmlRegisterType<bb::cascades::ResourceState>("bb.cascades",1,0,"ResourceState");
    qmlRegisterType<bb::cascades::RotateTransition>("bb.cascades",1,0,"RotateTransition");
    qmlRegisterType<bb::cascades::ScaleTransition>("bb.cascades",1,0,"ScaleTransition");
    qmlRegisterType<bb::cascades::ScalingMethod>("bb.cascades",1,0,"ScalingMethod");
    qmlRegisterType<bb::cascades::SceneCover>("bb.cascades",1,0,"SceneCover");
    qmlRegisterType<bb::cascades::ScreenIdleMode>("bb.cascades",1,0,"ScreenIdleMode");
    qmlRegisterType<bb::cascades::ScrollAnimation>("bb.cascades",1,0,"ScrollAnimation");
    qmlRegisterType<bb::cascades::ScrollIndicatorMode>("bb.cascades",1,0,"ScrollIndicatorMode");
    qmlRegisterType<bb::cascades::ScrollMode>("bb.cascades",1,0,"ScrollMode");
    qmlRegisterType<bb::cascades::ScrollPosition>("bb.cascades",1,0,"ScrollPosition");
    qmlRegisterType<bb::cascades::ScrollView>("bb.cascades",1,0,"ScrollView");
    qmlRegisterType<bb::cascades::ScrollViewProperties>("bb.cascades",1,0,"ScrollViewProperties");
    qmlRegisterType<bb::cascades::SegmentedControl>("bb.cascades",1,0,"SegmentedControl");
    qmlRegisterType<bb::cascades::SequentialAnimation>("bb.cascades",1,0,"SequentialAnimation");
    qmlRegisterType<bb::cascades::SettingsActionItem>("bb.cascades",1,0,"SettingsActionItem");
    qmlRegisterType<bb::cascades::Sheet>("bb.cascades",1,0,"Sheet");
    qmlRegisterType<bb::cascades::Shortcut>("bb.cascades",1,0,"Shortcut");
    qmlRegisterType<bb::cascades::SidebarState>("bb.cascades",1,0,"SidebarState");
    qmlRegisterType<bb::cascades::SidebarVisualState>("bb.cascades",1,0,"SidebarVisualState");
    qmlRegisterType<bb::cascades::SingleLineTextFilter>("bb.cascades",1,0,"SingleLineTextFilter");
    qmlRegisterType<bb::cascades::Slider>("bb.cascades",1,0,"Slider");
    qmlRegisterType<bb::cascades::SnapMode>("bb.cascades",1,0,"SnapMode");
    qmlRegisterType<bb::cascades::StackLayout>("bb.cascades",1,0,"StackLayout");
    qmlRegisterType<bb::cascades::StackLayoutProperties>("bb.cascades",1,0,"StackLayoutProperties");
    qmlRegisterType<bb::cascades::StackListLayout>("bb.cascades",1,0,"StackListLayout");
    qmlRegisterType<bb::cascades::StandardListItem>("bb.cascades",1,0,"StandardListItem");
    qmlRegisterType<bb::cascades::StockCurve>("bb.cascades",1,0,"StockCurve");
    qmlRegisterType<bb::cascades::SubmitKey>("bb.cascades",1,0,"SubmitKey");
    qmlRegisterType<bb::cascades::SubmitKeyFocusBehavior>("bb.cascades",1,0,"SubmitKeyFocusBehavior");
    qmlRegisterType<bb::cascades::SupportedDisplayOrientation>("bb.cascades",1,0,"SupportedDisplayOrientation");
    qmlRegisterType<bb::cascades::SystemDefaults>("bb.cascades",1,0,"SystemDefaults");
    qmlRegisterType<bb::cascades::SystemShortcut>("bb.cascades",1,0,"SystemShortcut");
    qmlRegisterType<bb::cascades::SystemShortcuts>("bb.cascades",1,0,"SystemShortcuts");
    qmlRegisterType<bb::cascades::Tab>("bb.cascades",1,0,"Tab");
    qmlRegisterType<bb::cascades::TabbedPane>("bb.cascades",1,0,"TabbedPane");
    qmlRegisterType<bb::cascades::TapEvent>("bb.cascades",1,0,"TapEvent");
    qmlRegisterType<bb::cascades::TapHandler>("bb.cascades",1,0,"TapHandler");
    qmlRegisterType<bb::cascades::TextAlign>("bb.cascades",1,0,"TextAlign");
    qmlRegisterType<bb::cascades::TextArea>("bb.cascades",1,0,"TextArea");
    qmlRegisterType<bb::cascades::TextAreaInputMode>("bb.cascades",1,0,"TextAreaInputMode");
    qmlRegisterType<bb::cascades::TextAreaScrollMode>("bb.cascades",1,0,"TextAreaScrollMode");
    qmlRegisterType<bb::cascades::TextAutoFit>("bb.cascades",1,0,"TextAutoFit");
    qmlRegisterType<bb::cascades::TextContentFlag>("bb.cascades",1,0,"TextContentFlag");
    qmlRegisterType<bb::cascades::TextContentProperties>("bb.cascades",1,0,"TextContentProperties");
    qmlRegisterType<bb::cascades::TextEditor>("bb.cascades",1,0,"TextEditor");
    qmlRegisterType<bb::cascades::TextField>("bb.cascades",1,0,"TextField");
    qmlRegisterType<bb::cascades::TextFieldInputMode>("bb.cascades",1,0,"TextFieldInputMode");
    qmlRegisterType<bb::cascades::TextFormat>("bb.cascades",1,0,"TextFormat");
    qmlRegisterType<bb::cascades::TextInputFlag>("bb.cascades",1,0,"TextInputFlag");
    qmlRegisterType<bb::cascades::TextInputMasking>("bb.cascades",1,0,"TextInputMasking");
    qmlRegisterType<bb::cascades::TextInputProperties>("bb.cascades",1,0,"TextInputProperties");
    qmlRegisterType<bb::cascades::TextStyle>("bb.cascades",1,0,"TextStyle");
    qmlRegisterType<bb::cascades::TextStyleDefinition>("bb.cascades",1,0,"TextStyleDefinition");
    qmlRegisterType<bb::cascades::Theme>("bb.cascades",1,0,"Theme");
    qmlRegisterType<bb::cascades::ThemeSupport>("bb.cascades",1,0,"ThemeSupport");
    qmlRegisterType<bb::cascades::TitleBar>("bb.cascades",1,0,"TitleBar");
    qmlRegisterType<bb::cascades::TitleBarAppearance>("bb.cascades",1,0,"TitleBarAppearance");
    qmlRegisterType<bb::cascades::TitleBarExpandableArea>("bb.cascades",1,0,"TitleBarExpandableArea");
    qmlRegisterType<bb::cascades::TitleBarExpandableAreaIndicatorVisibility>("bb.cascades",1,0,"TitleBarExpandableAreaIndicatorVisibility");
    qmlRegisterType<bb::cascades::TitleBarExpandableAreaToggleArea>("bb.cascades",1,0,"TitleBarExpandableAreaToggleArea");
    qmlRegisterType<bb::cascades::TitleBarKind>("bb.cascades",1,0,"TitleBarKind");
    qmlRegisterType<bb::cascades::TitleBarScrollBehavior>("bb.cascades",1,0,"TitleBarScrollBehavior");
    qmlRegisterType<bb::cascades::ToggleButton>("bb.cascades",1,0,"ToggleButton");
    qmlRegisterType<bb::cascades::TouchBehavior>("bb.cascades",1,0,"TouchBehavior");
    qmlRegisterType<bb::cascades::TouchEnterEvent>("bb.cascades",1,0,"TouchEnterEvent");
    qmlRegisterType<bb::cascades::TouchEvent>("bb.cascades",1,0,"TouchEvent");
    qmlRegisterType<bb::cascades::TouchExitEvent>("bb.cascades",1,0,"TouchExitEvent");
    qmlRegisterType<bb::cascades::TouchPropagationMode>("bb.cascades",1,0,"TouchPropagationMode");
    qmlRegisterType<bb::cascades::TouchReaction>("bb.cascades",1,0,"TouchReaction");
    qmlRegisterType<bb::cascades::TouchResponse>("bb.cascades",1,0,"TouchResponse");
    qmlRegisterType<bb::cascades::TouchType>("bb.cascades",1,0,"TouchType");
    qmlRegisterType<bb::cascades::TranslateTransition>("bb.cascades",1,0,"TranslateTransition");
    qmlRegisterType<bb::cascades::UIObject>("bb.cascades",1,0,"UIObject");
    qmlRegisterType<bb::cascades::UIOrientation>("bb.cascades",1,0,"UIOrientation");
    qmlRegisterType<bb::cascades::ValidationMode>("bb.cascades",1,0,"ValidationMode");
    qmlRegisterType<bb::cascades::ValidationState>("bb.cascades",1,0,"ValidationState");
    qmlRegisterType<bb::cascades::Validator>("bb.cascades",1,0,"Validator");
    qmlRegisterType<bb::cascades::VerticalAlignment>("bb.cascades",1,0,"VerticalAlignment");
    qmlRegisterType<bb::cascades::VisualNode>("bb.cascades",1,0,"VisualNode");
    qmlRegisterType<bb::cascades::VisualStyle>("bb.cascades",1,0,"VisualStyle");
    qmlRegisterType<bb::cascades::WebCookieJar>("bb.cascades",1,0,"WebCookieJar");
    qmlRegisterType<bb::cascades::WebDownloadRequest>("bb.cascades",1,0,"WebDownloadRequest");
    qmlRegisterType<bb::cascades::WebFindFlag>("bb.cascades",1,0,"WebFindFlag");
    qmlRegisterType<bb::cascades::WebLoadRequest>("bb.cascades",1,0,"WebLoadRequest");
    qmlRegisterType<bb::cascades::WebLoadStatus>("bb.cascades",1,0,"WebLoadStatus");
    qmlRegisterType<bb::cascades::WebNavigationRequest>("bb.cascades",1,0,"WebNavigationRequest");
    qmlRegisterType<bb::cascades::WebNavigationRequestAction>("bb.cascades",1,0,"WebNavigationRequestAction");
    qmlRegisterType<bb::cascades::WebNavigationType>("bb.cascades",1,0,"WebNavigationType");
    qmlRegisterType<bb::cascades::WebPage>("bb.cascades",1,0,"WebPage");
    qmlRegisterType<bb::cascades::WebPageCompositor>("bb.cascades",1,0,"WebPageCompositor");
    qmlRegisterType<bb::cascades::WebPageEventHandler>("bb.cascades",1,0,"WebPageEventHandler");
    qmlRegisterType<bb::cascades::WebPageTexture>("bb.cascades",1,0,"WebPageTexture");
    qmlRegisterType<bb::cascades::WebResourceRequest>("bb.cascades",1,0,"WebResourceRequest");
    qmlRegisterType<bb::cascades::WebResourceRequestFilter>("bb.cascades",1,0,"WebResourceRequestFilter");
    qmlRegisterType<bb::cascades::WebSettings>("bb.cascades",1,0,"WebSettings");
    qmlRegisterType<bb::cascades::WebStorage>("bb.cascades",1,0,"WebStorage");
    qmlRegisterType<bb::cascades::WebView>("bb.cascades",1,0,"WebView");
    qmlRegisterType<bb::cascades::Window>("bb.cascades",1,0,"Window");
    qmlRegisterType<bb::cascades::WindowProperty>("bb.cascades",1,0,"WindowProperty");
    qmlRegisterType<bb::cascades::WindowState>("bb.cascades",1,0,"WindowState");
    qmlRegisterType<bb::cascades::XmlDataModel>("bb.cascades",1,0,"XmlDataModel");
    qmlRegisterType<bb::cascades::BarcodeDetector>("bb.cascades",1,0,"BarcodeDetector");
    qmlRegisterType<bb::cascades::BarcodeDetectorVisuals>("bb.cascades",1,0,"BarcodeDetectorVisuals");
    qmlRegisterType<bb::cascades::BarcodeFormat>("bb.cascades",1,0,"BarcodeFormat");
    qmlRegisterType<bb::cascades::Camera>("bb.cascades",1,0,"Camera");
    qmlRegisterType<bb::cascades::CameraError>("bb.cascades",1,0,"CameraError");
    qmlRegisterType<bb::cascades::CameraFlashMode>("bb.cascades",1,0,"CameraFlashMode");
    qmlRegisterType<bb::cascades::CameraFocusMode>("bb.cascades",1,0,"CameraFocusMode");
    qmlRegisterType<bb::cascades::CameraFocusState>("bb.cascades",1,0,"CameraFocusState");
    qmlRegisterType<bb::cascades::CameraMode>("bb.cascades",1,0,"CameraMode");
    qmlRegisterType<bb::cascades::CameraSceneMode>("bb.cascades",1,0,"CameraSceneMode");
    qmlRegisterType<bb::cascades::CameraSettings>("bb.cascades",1,0,"CameraSettings");
    qmlRegisterType<bb::cascades::CameraShootingMode>("bb.cascades",1,0,"CameraShootingMode");
    qmlRegisterType<bb::cascades::CameraUnit>("bb.cascades",1,0,"CameraUnit");
    qmlRegisterType<bb::cascades::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::cascades::QrCodeErrorCorrection>("bb.cascades",1,0,"QrCodeErrorCorrection");
    qmlRegisterType<bb::cascades::QrCodeView>("bb.cascades",1,0,"QrCodeView");
    qmlRegisterType<bb::cascades::CalendarEventPicker>("bb.cascades",1,0,"CalendarEventPicker");
    qmlRegisterType<bb::cascades::CalendarEventPickerError>("bb.cascades",1,0,"CalendarEventPickerError");
    qmlRegisterType<bb::cascades::ContactPicker>("bb.cascades",1,0,"ContactPicker");
    qmlRegisterType<bb::cascades::ContactSelectionMode>("bb.cascades",1,0,"ContactSelectionMode");
    qmlRegisterType<bb::cascades::FilePicker>("bb.cascades",1,0,"FilePicker");
    qmlRegisterType<bb::cascades::FilePickerMode>("bb.cascades",1,0,"FilePickerMode");
    qmlRegisterType<bb::cascades::FilePickerSortFlag>("bb.cascades",1,0,"FilePickerSortFlag");
    qmlRegisterType<bb::cascades::FilePickerSortOrder>("bb.cascades",1,0,"FilePickerSortOrder");
    qmlRegisterType<bb::cascades::FilePickerViewMode>("bb.cascades",1,0,"FilePickerViewMode");
    qmlRegisterType<bb::cascades::FileType>("bb.cascades",1,0,"FileType");
    qmlRegisterType<bb::cascades::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::cascades::ICalendarConstants>("bb.cascades",1,0,"ICalendarConstants");
    qmlRegisterType<bb::cascades::SelectedContactAttribute>("bb.cascades",1,0,"SelectedContactAttribute");
    qmlRegisterType<bb::cascades::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::cascades::PlacePicker>("bb.cascades",1,0,"PlacePicker");
    qmlRegisterType<bb::cascades::PlacePickerControl>("bb.cascades",1,0,"PlacePickerControl");
    qmlRegisterType<bb::cascades::SelectedPlace>("bb.cascades",1,0,"SelectedPlace");
    qmlRegisterType<bb::cascades::SelectedPlaceImageType>("bb.cascades",1,0,"SelectedPlaceImageType");
    qmlRegisterType<bb::cascades::Banner>("bb.cascades",1,0,"Banner");
    qmlRegisterType<bb::cascades::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::cascades::BlankRenderEngine>("bb.cascades",1,0,"BlankRenderEngine");
    qmlRegisterType<bb::cascades::DataProvider>("bb.cascades",1,0,"DataProvider");
    qmlRegisterType<bb::cascades::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::cascades::KMLConversion>("bb.cascades",1,0,"KMLConversion");
    qmlRegisterType<bb::cascades::MapData>("bb.cascades",1,0,"MapData");
    qmlRegisterType<bb::cascades::MapFactory>("bb.cascades",1,0,"MapFactory");
    qmlRegisterType<bb::cascades::MapImageGenerator>("bb.cascades",1,0,"MapImageGenerator");
    qmlRegisterType<bb::cascades::MapLongPressToPinDrop>("bb.cascades",1,0,"MapLongPressToPinDrop");
    qmlRegisterType<bb::cascades::MapView>("bb.cascades",1,0,"MapView");
    qmlRegisterType<bb::cascades::RenderEngine>("bb.cascades",1,0,"RenderEngine");
    qmlRegisterType<bb::cascades::RenderEngineConfiguration>("bb.cascades",1,0,"RenderEngineConfiguration");
    qmlRegisterType<bb::cascades::RenderEngineInfo>("bb.cascades",1,0,"RenderEngineInfo");
    qmlRegisterType<bb::cascades::ViewProperties>("bb.cascades",1,0,"ViewProperties");
    qmlRegisterType<bb::system::ApplicationStartupMode>("bb.cascades",1,0,"ApplicationStartupMode");
    qmlRegisterType<bb::system::CardDoneMessage>("bb.cascades",1,0,"CardDoneMessage");
    qmlRegisterType<bb::system::CardEdge>("bb.cascades",1,0,"CardEdge");
    qmlRegisterType<bb::system::CardOrientation>("bb.cascades",1,0,"CardOrientation");
    qmlRegisterType<bb::system::CardPeek>("bb.cascades",1,0,"CardPeek");
    qmlRegisterType<bb::system::CardResizeMessage>("bb.cascades",1,0,"CardResizeMessage");
    qmlRegisterType<bb::system::Clipboard>("bb.cascades",1,0,"Clipboard");
    qmlRegisterType<bb::system::ContextActivityState>("bb.cascades",1,0,"ContextActivityState");
    qmlRegisterType<bb::system::ContextClassification>("bb.cascades",1,0,"ContextClassification");
    qmlRegisterType<bb::system::ContextCollector>("bb.cascades",1,0,"ContextCollector");
    qmlRegisterType<bb::system::ContextEvent>("bb.cascades",1,0,"ContextEvent");
    qmlRegisterType<bb::system::FileTransferMode>("bb.cascades",1,0,"FileTransferMode");
    qmlRegisterType<bb::system::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::system::InvokeAction>("bb.cascades",1,0,"InvokeAction");
    qmlRegisterType<bb::system::InvokeManager>("bb.cascades",1,0,"InvokeManager");
    qmlRegisterType<bb::system::InvokeQueryTargetsReply>("bb.cascades",1,0,"InvokeQueryTargetsReply");
    qmlRegisterType<bb::system::InvokeQueryTargetsRequest>("bb.cascades",1,0,"InvokeQueryTargetsRequest");
    qmlRegisterType<bb::system::InvokeReply>("bb.cascades",1,0,"InvokeReply");
    qmlRegisterType<bb::system::InvokeReplyError>("bb.cascades",1,0,"InvokeReplyError");
    qmlRegisterType<bb::system::InvokeRequest>("bb.cascades",1,0,"InvokeRequest");
    qmlRegisterType<bb::system::InvokeRequestTargetFiltersReply>("bb.cascades",1,0,"InvokeRequestTargetFiltersReply");
    qmlRegisterType<bb::system::InvokeSource>("bb.cascades",1,0,"InvokeSource");
    qmlRegisterType<bb::system::InvokeTarget>("bb.cascades",1,0,"InvokeTarget");
    qmlRegisterType<bb::system::InvokeTargetFilter>("bb.cascades",1,0,"InvokeTargetFilter");
    qmlRegisterType<bb::system::InvokeTargetReply>("bb.cascades",1,0,"InvokeTargetReply");
    qmlRegisterType<bb::system::InvokeUpdateTargetFiltersRequest>("bb.cascades",1,0,"InvokeUpdateTargetFiltersRequest");
    qmlRegisterType<bb::system::ListSelectionMode>("bb.cascades",1,0,"ListSelectionMode");
    qmlRegisterType<bb::system::LocaleHandler>("bb.cascades",1,0,"LocaleHandler");
    qmlRegisterType<bb::system::LocaleType>("bb.cascades",1,0,"LocaleType");
    qmlRegisterType<bb::system::MeasurementSystem>("bb.cascades",1,0,"MeasurementSystem");
    qmlRegisterType<bb::system::Menu>("bb.cascades",1,0,"Menu");
    qmlRegisterType<bb::system::MenuItem>("bb.cascades",1,0,"MenuItem");
    qmlRegisterType<bb::system::MenuItemInvokeParams>("bb.cascades",1,0,"MenuItemInvokeParams");
    qmlRegisterType<bb::system::MenuManager>("bb.cascades",1,0,"MenuManager");
    qmlRegisterType<bb::system::MenuManagerError>("bb.cascades",1,0,"MenuManagerError");
    qmlRegisterType<bb::system::NfcShareDataContent>("bb.cascades",1,0,"NfcShareDataContent");
    qmlRegisterType<bb::system::NfcShareError>("bb.cascades",1,0,"NfcShareError");
    qmlRegisterType<bb::system::NfcShareFilesContent>("bb.cascades",1,0,"NfcShareFilesContent");
    qmlRegisterType<bb::system::NfcShareManager>("bb.cascades",1,0,"NfcShareManager");
    qmlRegisterType<bb::system::NfcShareMode>("bb.cascades",1,0,"NfcShareMode");
    qmlRegisterType<bb::system::NfcShareSetContentError>("bb.cascades",1,0,"NfcShareSetContentError");
    qmlRegisterType<bb::system::NfcShareSuccess>("bb.cascades",1,0,"NfcShareSuccess");
    qmlRegisterType<bb::system::SecurityPerimeter>("bb.cascades",1,0,"SecurityPerimeter");
    qmlRegisterType<bb::system::SystemCredentialsPrompt>("bb.cascades",1,0,"SystemCredentialsPrompt");
    qmlRegisterType<bb::system::SystemDialog>("bb.cascades",1,0,"SystemDialog");
    qmlRegisterType<bb::system::SystemListDialog>("bb.cascades",1,0,"SystemListDialog");
    qmlRegisterType<bb::system::SystemProgressDialog>("bb.cascades",1,0,"SystemProgressDialog");
    qmlRegisterType<bb::system::SystemProgressToast>("bb.cascades",1,0,"SystemProgressToast");
    qmlRegisterType<bb::system::SystemPrompt>("bb.cascades",1,0,"SystemPrompt");
    qmlRegisterType<bb::system::SystemToast>("bb.cascades",1,0,"SystemToast");
    qmlRegisterType<bb::system::SystemUiButton>("bb.cascades",1,0,"SystemUiButton");
    qmlRegisterType<bb::system::SystemUiError>("bb.cascades",1,0,"SystemUiError");
    qmlRegisterType<bb::system::SystemUiInputField>("bb.cascades",1,0,"SystemUiInputField");
    qmlRegisterType<bb::system::SystemUiInputMode>("bb.cascades",1,0,"SystemUiInputMode");
    qmlRegisterType<bb::system::SystemUiModality>("bb.cascades",1,0,"SystemUiModality");
    qmlRegisterType<bb::system::SystemUiPosition>("bb.cascades",1,0,"SystemUiPosition");
    qmlRegisterType<bb::system::SystemUiProgressState>("bb.cascades",1,0,"SystemUiProgressState");
    qmlRegisterType<bb::system::SystemUiResult>("bb.cascades",1,0,"SystemUiResult");
    qmlRegisterType<bb::system::SystemUiReturnKeyAction>("bb.cascades",1,0,"SystemUiReturnKeyAction");
    qmlRegisterType<bb::system::Call>("bb.cascades",1,0,"Call");
    qmlRegisterType<bb::system::CallState>("bb.cascades",1,0,"CallState");
    qmlRegisterType<bb::system::CallType>("bb.cascades",1,0,"CallType");
    qmlRegisterType<bb::system::Line>("bb.cascades",1,0,"Line");
    qmlRegisterType<bb::system::LineType>("bb.cascades",1,0,"LineType");
    qmlRegisterType<bb::system::Phone>("bb.cascades",1,0,"Phone");
    qmlRegisterType<bb::pim::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::pim::Attachment>("bb.cascades",1,0,"Attachment");
    qmlRegisterType<bb::pim::AttachmentDownloadStatus>("bb.cascades",1,0,"AttachmentDownloadStatus");
    qmlRegisterType<bb::pim::AttachmentEncoding>("bb.cascades",1,0,"AttachmentEncoding");
    qmlRegisterType<bb::pim::Conversation>("bb.cascades",1,0,"Conversation");
    qmlRegisterType<bb::pim::ConversationBuilder>("bb.cascades",1,0,"ConversationBuilder");
    qmlRegisterType<bb::pim::ConversationStatus>("bb.cascades",1,0,"ConversationStatus");
    qmlRegisterType<bb::pim::ConversationUpdate>("bb.cascades",1,0,"ConversationUpdate");
    qmlRegisterType<bb::pim::Filter>("bb.cascades",1,0,"Filter");
    qmlRegisterType<bb::pim::Folder>("bb.cascades",1,0,"Folder");
    qmlRegisterType<bb::pim::FollowupFlag>("bb.cascades",1,0,"FollowupFlag");
    qmlRegisterType<bb::pim::Keys>("bb.cascades",1,0,"Keys");
    qmlRegisterType<bb::pim::Message>("bb.cascades",1,0,"Message");
    qmlRegisterType<bb::pim::MessageBody>("bb.cascades",1,0,"MessageBody");
    qmlRegisterType<bb::pim::MessageBuilder>("bb.cascades",1,0,"MessageBuilder");
    qmlRegisterType<bb::pim::MessageClass>("bb.cascades",1,0,"MessageClass");
    qmlRegisterType<bb::pim::MessageContact>("bb.cascades",1,0,"MessageContact");
    qmlRegisterType<bb::pim::MessageFilter>("bb.cascades",1,0,"MessageFilter");
    qmlRegisterType<bb::pim::MessageFlag>("bb.cascades",1,0,"MessageFlag");
    qmlRegisterType<bb::pim::MessageFolder>("bb.cascades",1,0,"MessageFolder");
    qmlRegisterType<bb::pim::MessagePriority>("bb.cascades",1,0,"MessagePriority");
    qmlRegisterType<bb::pim::MessageSearchFilter>("bb.cascades",1,0,"MessageSearchFilter");
    qmlRegisterType<bb::pim::MessageService>("bb.cascades",1,0,"MessageService");
    qmlRegisterType<bb::pim::MessageServiceFeature>("bb.cascades",1,0,"MessageServiceFeature");
    qmlRegisterType<bb::pim::MessageStatus>("bb.cascades",1,0,"MessageStatus");
    qmlRegisterType<bb::pim::MessageTransaction>("bb.cascades",1,0,"MessageTransaction");
    qmlRegisterType<bb::pim::MessageTransmissionStatus>("bb.cascades",1,0,"MessageTransmissionStatus");
    qmlRegisterType<bb::pim::MessageUpdate>("bb.cascades",1,0,"MessageUpdate");
    qmlRegisterType<bb::pim::MessageUpdateType>("bb.cascades",1,0,"MessageUpdateType");
    qmlRegisterType<bb::pim::MimeTypes>("bb.cascades",1,0,"MimeTypes");
    qmlRegisterType<bb::pim::OutOfOfficeSettings>("bb.cascades",1,0,"OutOfOfficeSettings");
    qmlRegisterType<bb::pim::SearchFilterCriteria>("bb.cascades",1,0,"SearchFilterCriteria");
    qmlRegisterType<bb::pim::SearchStatusCriteria>("bb.cascades",1,0,"SearchStatusCriteria");
    qmlRegisterType<bb::pim::SmsTransport>("bb.cascades",1,0,"SmsTransport");
    qmlRegisterType<bb::pim::SmsTransportRegistrationResult>("bb.cascades",1,0,"SmsTransportRegistrationResult");
    qmlRegisterType<bb::pim::SmsTransportSendResult>("bb.cascades",1,0,"SmsTransportSendResult");
    qmlRegisterType<bb::pim::StatusReport>("bb.cascades",1,0,"StatusReport");
    qmlRegisterType<bb::pim::StatusReportType>("bb.cascades",1,0,"StatusReportType");
    qmlRegisterType<bb::pim::Account>("bb.cascades",1,0,"Account");
    qmlRegisterType<bb::pim::AccountsChanged>("bb.cascades",1,0,"AccountsChanged");
    qmlRegisterType<bb::pim::AccountService>("bb.cascades",1,0,"AccountService");
    qmlRegisterType<bb::pim::Property>("bb.cascades",1,0,"Property");
    qmlRegisterType<bb::pim::Provider>("bb.cascades",1,0,"Provider");
    qmlRegisterType<bb::pim::Result>("bb.cascades",1,0,"Result");
    qmlRegisterType<bb::pim::Service>("bb.cascades",1,0,"Service");
    qmlRegisterType<bb::pim::Notebook>("bb.cascades",1,0,"Notebook");
    qmlRegisterType<bb::pim::NotebookConstraint>("bb.cascades",1,0,"NotebookConstraint");
    qmlRegisterType<bb::pim::NotebookEntry>("bb.cascades",1,0,"NotebookEntry");
    qmlRegisterType<bb::pim::NotebookEntryAttachment>("bb.cascades",1,0,"NotebookEntryAttachment");
    qmlRegisterType<bb::pim::NotebookEntryConstraint>("bb.cascades",1,0,"NotebookEntryConstraint");
    qmlRegisterType<bb::pim::NotebookEntryDescription>("bb.cascades",1,0,"NotebookEntryDescription");
    qmlRegisterType<bb::pim::NotebookEntryDueDate>("bb.cascades",1,0,"NotebookEntryDueDate");
    qmlRegisterType<bb::pim::NotebookEntryFilter>("bb.cascades",1,0,"NotebookEntryFilter");
    qmlRegisterType<bb::pim::NotebookEntryId>("bb.cascades",1,0,"NotebookEntryId");
    qmlRegisterType<bb::pim::NotebookEntrySearchField>("bb.cascades",1,0,"NotebookEntrySearchField");
    qmlRegisterType<bb::pim::NotebookEntryStatus>("bb.cascades",1,0,"NotebookEntryStatus");
    qmlRegisterType<bb::pim::NotebookId>("bb.cascades",1,0,"NotebookId");
    qmlRegisterType<bb::pim::NotebookService>("bb.cascades",1,0,"NotebookService");
    qmlRegisterType<bb::pim::NotebookServiceResult>("bb.cascades",1,0,"NotebookServiceResult");
    qmlRegisterType<bb::pim::Contact>("bb.cascades",1,0,"Contact");
    qmlRegisterType<bb::pim::ContactActivity>("bb.cascades",1,0,"ContactActivity");
    qmlRegisterType<bb::pim::ContactAttribute>("bb.cascades",1,0,"ContactAttribute");
    qmlRegisterType<bb::pim::ContactAttributeBuilder>("bb.cascades",1,0,"ContactAttributeBuilder");
    qmlRegisterType<bb::pim::ContactAutoCompleteSearchFilters>("bb.cascades",1,0,"ContactAutoCompleteSearchFilters");
    qmlRegisterType<bb::pim::ContactBuilder>("bb.cascades",1,0,"ContactBuilder");
    qmlRegisterType<bb::pim::ContactConsts>("bb.cascades",1,0,"ContactConsts");
    qmlRegisterType<bb::pim::ContactFavouriteAction>("bb.cascades",1,0,"ContactFavouriteAction");
    qmlRegisterType<bb::pim::ContactFavouriteActionBuilder>("bb.cascades",1,0,"ContactFavouriteActionBuilder");
    qmlRegisterType<bb::pim::ContactListFilters>("bb.cascades",1,0,"ContactListFilters");
    qmlRegisterType<bb::pim::ContactNews>("bb.cascades",1,0,"ContactNews");
    qmlRegisterType<bb::pim::ContactOnlineStatus>("bb.cascades",1,0,"ContactOnlineStatus");
    qmlRegisterType<bb::pim::ContactPhoto>("bb.cascades",1,0,"ContactPhoto");
    qmlRegisterType<bb::pim::ContactPhotoBuilder>("bb.cascades",1,0,"ContactPhotoBuilder");
    qmlRegisterType<bb::pim::ContactPostalAddress>("bb.cascades",1,0,"ContactPostalAddress");
    qmlRegisterType<bb::pim::ContactPostalAddressBuilder>("bb.cascades",1,0,"ContactPostalAddressBuilder");
    qmlRegisterType<bb::pim::ContactRemoteSearchFilters>("bb.cascades",1,0,"ContactRemoteSearchFilters");
    qmlRegisterType<bb::pim::ContactSearchFilters>("bb.cascades",1,0,"ContactSearchFilters");
    qmlRegisterType<bb::pim::ContactService>("bb.cascades",1,0,"ContactService");
    qmlRegisterType<bb::pim::AnalyticsParams>("bb.cascades",1,0,"AnalyticsParams");
    qmlRegisterType<bb::pim::AnalyticsStats>("bb.cascades",1,0,"AnalyticsStats");
    qmlRegisterType<bb::pim::Attendee>("bb.cascades",1,0,"Attendee");
    qmlRegisterType<bb::pim::AttendeeInEvents>("bb.cascades",1,0,"AttendeeInEvents");
    qmlRegisterType<bb::pim::AttendeeRole>("bb.cascades",1,0,"AttendeeRole");
    qmlRegisterType<bb::pim::AttendeeSearchParameters>("bb.cascades",1,0,"AttendeeSearchParameters");
    qmlRegisterType<bb::pim::AttendeeStatus>("bb.cascades",1,0,"AttendeeStatus");
    qmlRegisterType<bb::pim::BbmConference>("bb.cascades",1,0,"BbmConference");
    qmlRegisterType<bb::pim::BbmConferencePreferredData>("bb.cascades",1,0,"BbmConferencePreferredData");
    qmlRegisterType<bb::pim::BbmConferenceUserData>("bb.cascades",1,0,"BbmConferenceUserData");
    qmlRegisterType<bb::pim::BusyStatus>("bb.cascades",1,0,"BusyStatus");
    qmlRegisterType<bb::pim::CalendarEvent>("bb.cascades",1,0,"CalendarEvent");
    qmlRegisterType<bb::pim::CalendarFolder>("bb.cascades",1,0,"CalendarFolder");
    qmlRegisterType<bb::pim::CalendarService>("bb.cascades",1,0,"CalendarService");
    qmlRegisterType<bb::pim::CalendarSettings>("bb.cascades",1,0,"CalendarSettings");
    qmlRegisterType<bb::pim::CommonAttendee>("bb.cascades",1,0,"CommonAttendee");
    qmlRegisterType<bb::pim::CommonLocation>("bb.cascades",1,0,"CommonLocation");
    qmlRegisterType<bb::pim::DataTypes>("bb.cascades",1,0,"DataTypes");
    qmlRegisterType<bb::pim::DayOfWeek>("bb.cascades",1,0,"DayOfWeek");
    qmlRegisterType<bb::pim::DetailLevel>("bb.cascades",1,0,"DetailLevel");
    qmlRegisterType<bb::pim::EventKey>("bb.cascades",1,0,"EventKey");
    qmlRegisterType<bb::pim::EventRefresh>("bb.cascades",1,0,"EventRefresh");
    qmlRegisterType<bb::pim::EventSearchParameters>("bb.cascades",1,0,"EventSearchParameters");
    qmlRegisterType<bb::pim::FolderKey>("bb.cascades",1,0,"FolderKey");
    qmlRegisterType<bb::pim::Frequency>("bb.cascades",1,0,"Frequency");
    qmlRegisterType<bb::pim::ICalendarData>("bb.cascades",1,0,"ICalendarData");
    qmlRegisterType<bb::pim::ICalendarDataPath>("bb.cascades",1,0,"ICalendarDataPath");
    qmlRegisterType<bb::pim::ICalendarObjects>("bb.cascades",1,0,"ICalendarObjects");
    qmlRegisterType<bb::pim::ICalendarTodo>("bb.cascades",1,0,"ICalendarTodo");
    qmlRegisterType<bb::pim::ICalendarTodoPriority>("bb.cascades",1,0,"ICalendarTodoPriority");
    qmlRegisterType<bb::pim::ICalendarTodoStatus>("bb.cascades",1,0,"ICalendarTodoStatus");
    qmlRegisterType<bb::pim::MeetingHistory>("bb.cascades",1,0,"MeetingHistory");
    qmlRegisterType<bb::pim::Notification>("bb.cascades",1,0,"Notification");
    qmlRegisterType<bb::pim::Recurrence>("bb.cascades",1,0,"Recurrence");
    qmlRegisterType<bb::pim::Result>("bb.cascades",1,0,"Result");
    qmlRegisterType<bb::pim::Sensitivity>("bb.cascades",1,0,"Sensitivity");
    qmlRegisterType<bb::pim::SortField>("bb.cascades",1,0,"SortField");
    qmlRegisterType<bb::location::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::location::PositionErrorCode>("bb.cascades",1,0,"PositionErrorCode");
    qmlRegisterType<bb::network::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::network::PushCommand>("bb.cascades",1,0,"PushCommand");
    qmlRegisterType<bb::network::PushErrorCode>("bb.cascades",1,0,"PushErrorCode");
    qmlRegisterType<bb::network::PushPayload>("bb.cascades",1,0,"PushPayload");
    qmlRegisterType<bb::network::PushService>("bb.cascades",1,0,"PushService");
    qmlRegisterType<bb::network::PushStatus>("bb.cascades",1,0,"PushStatus");
    qmlRegisterType<bb::data::AsyncDataAccess>("bb.cascades",1,0,"AsyncDataAccess");
    qmlRegisterType<bb::data::AsyncWorker>("bb.cascades",1,0,"AsyncWorker");
    qmlRegisterType<bb::data::DataAccessError>("bb.cascades",1,0,"DataAccessError");
    qmlRegisterType<bb::data::DataAccessErrorType>("bb.cascades",1,0,"DataAccessErrorType");
    qmlRegisterType<bb::data::DataAccessReply>("bb.cascades",1,0,"DataAccessReply");
    qmlRegisterType<bb::data::DataSource>("bb.cascades",1,0,"DataSource");
    qmlRegisterType<bb::data::DataSourceType>("bb.cascades",1,0,"DataSourceType");
    qmlRegisterType<bb::data::JsonDataAccess>("bb.cascades",1,0,"JsonDataAccess");
    qmlRegisterType<bb::data::SqlConnection>("bb.cascades",1,0,"SqlConnection");
    qmlRegisterType<bb::data::SqlDataAccess>("bb.cascades",1,0,"SqlDataAccess");
    qmlRegisterType<bb::data::SqlWorker>("bb.cascades",1,0,"SqlWorker");
    qmlRegisterType<bb::data::XmlDataAccess>("bb.cascades",1,0,"XmlDataAccess");
    qmlRegisterType<bb::utility::Global>("bb.cascades",1,0,"Global");
    qmlRegisterType<bb::utility::ImageConverter>("bb.cascades",1,0,"ImageConverter");
    qmlRegisterType<bb::utility::SpellChecker>("bb.cascades",1,0,"SpellChecker");
    qmlRegisterType<bb::utility::StringValidator>("bb.cascades",1,0,"StringValidator");
    qmlRegisterType<bb::utility::CustomDateFormatter>("bb.cascades",1,0,"CustomDateFormatter");
    qmlRegisterType<bb::utility::DateFormat>("bb.cascades",1,0,"DateFormat");
    qmlRegisterType<bb::utility::Formatting>("bb.cascades",1,0,"Formatting");
    qmlRegisterType<bb::utility::Global>("bb.cascades",1,0,"Global");
}

#endif //QTCREATOR_CASCADES_QML_COMPLETION

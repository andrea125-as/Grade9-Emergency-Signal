import streamlit as st
import pandas as pd

st.title("Emergency Signal Monitoring System")

pressed = st.checkbox("Emergency Button Pressed")

blink_interval = 250

if pressed:
    st.error("EMERGENCY ACTIVATED")
    st.write("LED Status: BLINKING")
    st.metric("Blink Interval", "250 ms")
else:
    st.success("SYSTEM STANDBY")
    st.write("LED Status: OFF")

data = pd.DataFrame({
    "Button State": ["Released", "Pressed"],
    "LED Status": ["OFF", "BLINKING"]
})

st.subheader("Button State Comparison")
st.dataframe(data, use_container_width=True)
